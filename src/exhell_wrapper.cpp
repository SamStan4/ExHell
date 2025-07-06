#include <QApplication>

#include "exhell_wrapper.hpp"
#include "ui/exhell_main_view.hpp"

// MARK: public

exhell::exhell_wrapper& exhell::exhell_wrapper::get_instance()
{
  static exhell_wrapper instance;
  return instance;
}

void exhell::exhell_wrapper::run_exhell(int argc, char** argv)
{
  QApplication exhell_app(argc, argv);
  exhell_main_view exhell_view;
  exhell_view.show();
  exhell_app.exec();
}

// MARK: private

exhell::exhell_wrapper::exhell_wrapper() = default;
exhell::exhell_wrapper::~exhell_wrapper() = default;