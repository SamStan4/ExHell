#pragma once

#include <iostream>

class exhell_wrapper
{
public:
  static exhell_wrapper& get_instance();

  exhell_wrapper(const exhell_wrapper&) = delete;
  exhell_wrapper& operator=(const exhell_wrapper&) = delete;

  exhell_wrapper(exhell_wrapper&&) = delete;
  exhell_wrapper& operator=(exhell_wrapper&&) = delete;

  void run_exhell(int, char**);

private:

  exhell_wrapper() = default;
  ~exhell_wrapper() = default;
};