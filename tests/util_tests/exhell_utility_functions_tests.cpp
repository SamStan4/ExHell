#include <gtest/gtest.h>
#include "exhell_utility_functions.hpp"

class number_to_column_test : public ::testing::Test {};

TEST_F(number_to_column_test, handle_basic_columns)
{
  EXPECT_EQ(exhell::number_to_exhell_column(0), "A");
  EXPECT_EQ(exhell::number_to_exhell_column(1), "B");
  EXPECT_EQ(exhell::number_to_exhell_column(2), "C");
  EXPECT_EQ(exhell::number_to_exhell_column(3), "D");
  EXPECT_EQ(exhell::number_to_exhell_column(4), "E");
  EXPECT_EQ(exhell::number_to_exhell_column(5), "F");
  EXPECT_EQ(exhell::number_to_exhell_column(6), "G");
  EXPECT_EQ(exhell::number_to_exhell_column(7), "H");
  EXPECT_EQ(exhell::number_to_exhell_column(8), "I");
  EXPECT_EQ(exhell::number_to_exhell_column(9), "J");
  EXPECT_EQ(exhell::number_to_exhell_column(10), "K");
  EXPECT_EQ(exhell::number_to_exhell_column(11), "L");
  EXPECT_EQ(exhell::number_to_exhell_column(12), "M");
  EXPECT_EQ(exhell::number_to_exhell_column(13), "N");
  EXPECT_EQ(exhell::number_to_exhell_column(14), "O");
  EXPECT_EQ(exhell::number_to_exhell_column(15), "P");
  EXPECT_EQ(exhell::number_to_exhell_column(16), "Q");
  EXPECT_EQ(exhell::number_to_exhell_column(17), "R");
  EXPECT_EQ(exhell::number_to_exhell_column(18), "S");
  EXPECT_EQ(exhell::number_to_exhell_column(19), "T");
  EXPECT_EQ(exhell::number_to_exhell_column(20), "U");
  EXPECT_EQ(exhell::number_to_exhell_column(21), "V");
  EXPECT_EQ(exhell::number_to_exhell_column(22), "W");
  EXPECT_EQ(exhell::number_to_exhell_column(23), "X");
  EXPECT_EQ(exhell::number_to_exhell_column(24), "Y");
  EXPECT_EQ(exhell::number_to_exhell_column(25), "Z");
  EXPECT_EQ(exhell::number_to_exhell_column(26), "AA");
}