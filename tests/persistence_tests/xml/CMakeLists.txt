set(EXHELL_XML_TEST_SRC
  exhell_xml_serializer_tests.cpp
)

add_executable(ExHell_xml_tests
  ${EXHELL_XML_TEST_SRC}
)

target_link_libraries(ExHell_xml_tests
  GTest::gtest_main
  GTest::gmock
  exhell_xml
)

enable_testing()
gtest_discover_tests(ExHell_xml_tests)

target_include_directories(ExHell_xml_tests
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)