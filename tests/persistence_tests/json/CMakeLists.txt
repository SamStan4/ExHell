set(EXHELL_JSON_TEST_SRC
  exhell_json_serializer_tests.cpp
)

add_executable(ExHell_json_tests
  ${EXHELL_JSON_TEST_SRC}
)

target_link_libraries(ExHell_json_tests
  GTest::gtest_main
  GTest::gmock
  exhell_json
)

enable_testing()
gtest_discover_tests(ExHell_json_tests)

target_include_directories(ExHell_json_tests
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)