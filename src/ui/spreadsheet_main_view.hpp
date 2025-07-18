#pragma once

#include <QTableWidget>

namespace exhell
{
  class spreadsheet_main_view : public QTableWidget
  {
    Q_OBJECT

  public:

    explicit spreadsheet_main_view(QWidget* = nullptr, const int = 1000, const int = 1000);

    ~spreadsheet_main_view(void);

  private:

    void set_default_view_config(void);

    void set_headers(void);

    void set_row_headers(void);

    void set_column_headers(void);

    void register_event_handlers(void);

  private slots:

    void handle_cell_clicked_event(int, int);

    void handle_cell_double_clicked_event(int, int);

    void handle_cell_contents_changed_event(QTableWidgetItem*);

    void handle_current_cell_changed_event(int, int, int, int);
  };
}