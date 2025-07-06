#include "exhell_utility_functions.hpp"

#include <algorithm>

std::string exhell::number_to_exhell_column(const int _number)
{
  std::string result;
  int number = _number;

  do
  {
    const char new_char = static_cast<char>('A' + (number % 26));

    number /= 26;

    result.push_back(new_char);

  } while (number > 0);

  std::reverse(result.begin(), result.end());

  return result;
}

int exhell::exhell_column_to_number(const std::string& _column)
{
  int power = 1;
  int result = 0;

  for (auto it = _column.rbegin(); it != _column.rend(); ++it)
  {
    const char cur_char = *it;

    const int digit = static_cast<int>(cur_char - 'A');

    result += power * digit;

    power *= 26;
  }

  return result;
}

std::string exhell::number_to_exhell_row(const int _number)
{
  return std::to_string(_number + 1);
}

int exhell::exhell_row_to_number(const std::string& _row)
{
  return std::stoi(_row) - 1;
}