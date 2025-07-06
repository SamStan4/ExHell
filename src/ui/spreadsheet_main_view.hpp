#pragma once

#include <QTableWidget>

namespace exhell
{
  class spreadsheet_main_view : public QTableWidget
  {
    Q_OBJECT

  public:

    explicit spreadsheet_main_view(QWidget* = nullptr, const int = 100, const int = 100);

    ~spreadsheet_main_view();

  private:

    void set_default_view_config();

    void set_headers();

    void set_row_headers();

    void set_column_headers();
  };
}