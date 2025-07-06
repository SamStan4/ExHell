#include "spreadsheet_main_view.hpp"

#include <iostream>
#include <QHeaderView>

#include "util/exhell_utility_functions.hpp"
#include "exhell_macros.hpp"

// MARK: public

exhell::spreadsheet_main_view::spreadsheet_main_view(QWidget* _parent, const int _rows, const int _cols)
  : QTableWidget(_rows, _cols, _parent)
{
  this->set_default_view_config();
  this->set_headers();
  this->register_event_handlers();
}

exhell::spreadsheet_main_view::~spreadsheet_main_view(void) = default;

// MARK: private

void exhell::spreadsheet_main_view::set_default_view_config(void)
{
  this->setAlternatingRowColors(true);
  this->setSelectionBehavior(QAbstractItemView::SelectItems);
  this->setGridStyle(Qt::SolidLine);
  this->horizontalHeader()->setStretchLastSection(false);
  this->verticalHeader()->setDefaultSectionSize(25);
  this->verticalHeader()->setFixedWidth(50);
}

void exhell::spreadsheet_main_view::set_headers(void)
{
  this->set_column_headers();
  this->set_row_headers();
}

void exhell::spreadsheet_main_view::set_row_headers(void)
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

void exhell::spreadsheet_main_view::set_column_headers(void)
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

void exhell::spreadsheet_main_view::register_event_handlers(void)
{
  QObject::connect(this, &QTableWidget::cellClicked, this, &exhell::spreadsheet_main_view::handle_cell_clicked_event);
  QObject::connect(this, &QTableWidget::cellDoubleClicked, this, &exhell::spreadsheet_main_view::handle_cell_double_clicked_event);
  QObject::connect(this, &QTableWidget::itemChanged, this, &exhell::spreadsheet_main_view::handle_cell_contents_changed_event);
  QObject::connect(this, &QTableWidget::currentCellChanged, this, &exhell::spreadsheet_main_view::handle_current_cell_changed_event);
}

void exhell::spreadsheet_main_view::handle_cell_clicked_event(int _row, int _col)
{
  #if EXHELL_EVENT_LOGS
    std::cout << MAGENTA << "cell clicked event: " << exhell::number_to_exhell_row(_row) << exhell::number_to_exhell_column(_col) << RESET << std::endl;
  #endif

  // TODO: more logic here
}

void exhell::spreadsheet_main_view::handle_cell_double_clicked_event(int _row, int _col)
{
  #if EXHELL_EVENT_LOGS
    std::cout << MAGENTA << "cell double clicked event: " << exhell::number_to_exhell_row(_row) << exhell::number_to_exhell_column(_col) << RESET << std::endl;
  #endif

  // TODO: more logic here
}

void exhell::spreadsheet_main_view::handle_cell_contents_changed_event(QTableWidgetItem* _item)
{
  const int row = _item->row();
  const int col = _item->column();

  #if EXHELL_EVENT_LOGS
    std::cout << MAGENTA << "cell contents changed event: " << exhell::number_to_exhell_row(row) << exhell::number_to_exhell_column(col) << RESET << std::endl;
  #endif

  // TODO: much more logic here
}

void exhell::spreadsheet_main_view::handle_current_cell_changed_event(int _cur_row, int _cur_col, int _prev_row, int _prev_col)
{
  #if EXHELL_EVENT_LOGS
    if (_prev_row < 0 || _prev_col < 0)
    {
      std::cout << MAGENTA << "current cell changed event: " << exhell::number_to_exhell_row(_cur_row) << exhell::number_to_exhell_column(_cur_col) << RESET << std::endl;
    }
    else
    {
      std::cout
        << MAGENTA << "current cell changed event: from " << exhell::number_to_exhell_row(_prev_row) << exhell::number_to_exhell_column(_prev_col)
        << " to " << exhell::number_to_exhell_row(_cur_row) << exhell::number_to_exhell_column(_cur_col) << RESET << std::endl;
    }
  #endif

  // TODO: much more logic here
}