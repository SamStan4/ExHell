set(EXHELL_CSV_TEST_SRC
  exhell_csv_serializer_tests.cpp
)

add_executable(ExHell_csv_tests
  ${EXHELL_CSV_TEST_SRC}
)

target_link_libraries(ExHell_csv_tests
  GTest::gtest_main
  GTest::gmock
  exhell_csv
)

enable_testing()
gtest_discover_tests(ExHell_csv_tests)

target_include_directories(ExHell_csv_tests
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)