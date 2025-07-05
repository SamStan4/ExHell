#include "exhell_main_view.hpp"

exhell_main_view::exhell_main_view(QWidget* _parent, const int _start_width, const int _start_height)
  : QMainWindow(_parent)
{
  this->setWindowTitle("ExHell");
  this->resize(_start_width, _start_height);
}

exhell_main_view::~exhell_main_view() = default;