#include "exhell_utility_functions.hpp"

#include <algorithm>
#include <regex>
#include <stdexcept>

std::string exhell::number_to_exhell_column(const int _number)
{
  if (_number < 0)
  {
    throw std::invalid_argument("invalid argument in number_to_exhell_column");   
  }

  std::string result;
  int number = _number + 1;

  while (number > 0)
  {
    const int remainder = (number - 1) % 26;

    const char new_digit = static_cast<char>(remainder) + 'A';

    result.push_back(new_digit);

    number = (number - 1) / 26;
  }

  std::reverse(result.begin(), result.end());

  return result;
}

int exhell::exhell_column_to_number(const std::string& _column)
{
  if (!exhell::is_valid_exhell_column(_column))
  {
    throw std::invalid_argument("invalid argument in exhell_column_to_number");
  }

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
  if (_number < 0)
  {
    throw std::invalid_argument("invalid argument in number_to_exhell_row");   
  }

  return std::to_string(_number + 1);
}

int exhell::exhell_row_to_number(const std::string& _row)
{
  if (!exhell::is_valid_exhell_row(_row))
  {
    throw std::invalid_argument("invalid argument in exhell_row_to_number");   
  }

  return std::stoi(_row) - 1;
}

bool is_valid_exhell_column(const std::string& _column)
{
  static std::regex uppercase_pattern("^[A-Z]+$");

  if (_column.empty())
  {
    return false;
  }

  return std::regex_match(_column, uppercase_pattern);
}

bool is_valid_exhell_row(const std::string& _row)
{
  static std::regex number_pattern("^[1-9][0-9]*$");

  if (_row.empty())
  {
    return false;
  }

  return std::regex_match(_row, number_pattern);
}