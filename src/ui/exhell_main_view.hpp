#pragma once

#include <QMainWindow>

class exhell_main_view : public QMainWindow
{
  Q_OBJECT

public:

  explicit exhell_main_view(QWidget* = nullptr, const int = 800, const int = 600);

  ~exhell_main_view();

};