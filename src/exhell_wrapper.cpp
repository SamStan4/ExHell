#include "exhell_wrapper.hpp"

exhell_wrapper& exhell_wrapper::get_instance()
{
  static exhell_wrapper instance;
  return instance;
}

void exhell_wrapper::run_exhell()
{
  std::cout << "running exhell" << std::endl;
}