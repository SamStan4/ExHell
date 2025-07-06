#pragma once

#include <iostream>

namespace exhell
{
  class exhell_wrapper
  {
  public:

    exhell_wrapper(const exhell_wrapper&) = delete;
    exhell_wrapper& operator=(const exhell_wrapper&) = delete;

    exhell_wrapper(exhell_wrapper&&) = delete;
    exhell_wrapper& operator=(exhell_wrapper&&) = delete;

    static exhell_wrapper& get_instance();

    void run_exhell(int, char**);

  private:

    exhell_wrapper();
    ~exhell_wrapper();
  };
}