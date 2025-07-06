#include "exhell_main_view.hpp"

#include "ui/spreadsheet_main_view.hpp"

exhell::exhell_main_view::exhell_main_view(QWidget* _parent, const int _start_width, const int _start_height)
  : QMainWindow(_parent), spreadsheet_view(this)
{
  this->setWindowTitle("ExHell");
  this->resize(_start_width, _start_height);
  this->setCentralWidget(&this->spreadsheet_view);
}

exhell::exhell_main_view::~exhell_main_view() = default;