set(UTIL_TEST_SOURCES
  exhell_utility_functions_tests.cpp
)

add_executable(ExHell_util_tests
  ${UTIL_TEST_SOURCES}
)

target_link_libraries(ExHell_util_tests
  exhell_util
  GTest::gtest_main
  Qt6::Core
)

enable_testing()
gtest_discover_tests(ExHell_util_tests)