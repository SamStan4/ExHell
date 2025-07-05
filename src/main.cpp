#include "exhell_wrapper.hpp"

int main(int argc, char *argv[])
{
  exhell_wrapper& app_instance = exhell_wrapper::get_instance();
  app_instance.run_exhell();
  return 0;
}