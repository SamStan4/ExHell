#include "exhell_wrapper.hpp"

int main(int argc, char** argv)
{
  exhell::exhell_wrapper& app_instance = exhell::exhell_wrapper::get_instance();
  app_instance.run_exhell(argc, argv);
  return 0;
}