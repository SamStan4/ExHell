#pragma once

#include <QMainWindow>
#include <QToolBar>

#include "ui/spreadsheet_main_view.hpp"

namespace exhell
{
  class exhell_main_view : public QMainWindow
  {
    Q_OBJECT

  public:

  static exhell_main_view& get_instance();

  exhell_main_view(const exhell_main_view&) = delete;
  exhell_main_view& operator=(const exhell_main_view&) = delete;

  exhell_main_view(exhell_main_view&&) = delete;
  exhell_main_view& operator=(exhell_main_view&&) = delete;

  private:

    spreadsheet_main_view spreadsheet_view;

    QToolBar* main_tool_bar{ nullptr };

    explicit exhell_main_view(QWidget* = nullptr, const int = 800, const int = 600);

    ~exhell_main_view();

    void setup_tool_bars(void);

    void setup_main_tool_bar(void);

  private slots:

    /**
     * Event handler for new actions.
     */
    void handle_new_action_event(void);

    /**
     * Event handler for opening a file.
     */
    void handle_open_action_event(void);

    void handle_save_action_event(void);
  };
}