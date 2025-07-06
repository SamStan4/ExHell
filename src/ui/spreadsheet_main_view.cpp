#include "spreadsheet_main_view.hpp"

#include <QHeaderView>

#include "util/exhell_utility_functions.hpp"

// MARK: public

exhell::spreadsheet_main_view::spreadsheet_main_view(QWidget* _parent, const int _rows, const int _cols)
  : QTableWidget(_rows, _cols, _parent)
{
  this->set_default_view_config();
  this->set_headers();
}

exhell::spreadsheet_main_view::~spreadsheet_main_view() = default;

// MARK: private

void exhell::spreadsheet_main_view::set_default_view_config()
{
  this->setAlternatingRowColors(true);
  this->setSelectionBehavior(QAbstractItemView::SelectItems);
  this->setGridStyle(Qt::SolidLine);

  // Make it so the last column does not stretch like crazy when the table is small.
  this->horizontalHeader()->setStretchLastSection(false);
  this->verticalHeader()->setDefaultSectionSize(25);
  this->verticalHeader()->setFixedWidth(50);
}

void exhell::spreadsheet_main_view::set_headers()
{
  this->set_column_headers();
  this->set_row_headers();
}

void exhell::spreadsheet_main_view::set_row_headers()
{
  const int num_cols = this->columnCount();
  QStringList column_headers;

  for (int i = 0; i < num_cols; ++i)
  {
    QString new_column_header = QString::fromStdString(exhell::number_to_exhell_column(i));
    column_headers.append(new_column_header);
  }

  this->setHorizontalHeaderLabels(column_headers);
}

void exhell::spreadsheet_main_view::set_column_headers()
{
  const int num_rows = this->rowCount();
  QStringList row_headers;

  for (int i = 0; i < num_rows; ++i)
  {
    QString new_row_header = QString::fromStdString(exhell::number_to_exhell_row(i));
    row_headers.append(new_row_header);
  }

  this->setVerticalHeaderLabels(row_headers);
}