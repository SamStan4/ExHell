#include <QApplication>

#include "exhell_wrapper.hpp"
#include "ui/exhell_main_view.hpp"

exhell_wrapper& exhell_wrapper::get_instance()
{
  static exhell_wrapper instance;
  return instance;
}

void exhell_wrapper::run_exhell(int argc, char** argv)
{
  QApplication exhell_app(argc, argv);
  exhell_main_view exhell_view;
  exhell_view.show();
  exhell_app.exec();
}