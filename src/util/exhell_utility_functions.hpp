#pragma once

#include <string>

namespace exhell
{
  std::string number_to_exhell_column(const int);

  int exhell_column_to_number(const std::string&);

  std::string number_to_exhell_row(const int);

  int exhell_row_to_number(const std::string&);

  bool is_valid_exhell_column(const std::string&);

  bool is_valid_exhell_row(const std::string&);
}