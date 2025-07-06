#pragma once

#include <QMainWindow>

#include "ui/spreadsheet_main_view.hpp"

namespace exhell
{
  class exhell_main_view : public QMainWindow
  {
    Q_OBJECT

  public:

    explicit exhell_main_view(QWidget* = nullptr, const int = 800, const int = 600);

    ~exhell_main_view();

  private:

    spreadsheet_main_view spreadsheet_view;

  };
}