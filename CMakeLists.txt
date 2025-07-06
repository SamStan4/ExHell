cmake_minimum_required(VERSION 3.28.3)
project(ExHell)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_AUTOMOC ON)

# for building the ExHell executable

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

set(UTIL_SOURCES
  src/util/exhell_utility_functions.cpp
  src/util/exhell_utility_functions.hpp
)

set(UI_SOURCES
  src/ui/exhell_main_view.cpp
  src/ui/exhell_main_view.hpp
  src/ui/spreadsheet_main_view.cpp
  src/ui/spreadsheet_main_view.hpp
)

set(WRAPPER_SOURCES
  src/exhell_wrapper.cpp
  src/exhell_wrapper.hpp
)

set(MACRO_SOURCE
  src/exhell_macros.hpp
)

set(MAIN_SRC
  src/main.cpp
)

add_executable(ExHell
  ${MACRO_SOURCE}
  ${MAIN_SRC}
  ${WRAPPER_SOURCES}
  ${UI_SOURCES}
  ${UTIL_SOURCES}
)

target_include_directories(ExHell PRIVATE
  src
  src/ui
  src/util
)

target_link_libraries(ExHell
  Qt6::Core
  Qt6::Gui
  Qt6::Widgets
)

# for building the ExHell_tests executable

find_package(GTest REQUIRED)
include(GoogleTest)

set(UTIL_TEST_SOURCES
  tests/util_tests/exhell_utility_functions_tests.cpp
)

add_executable(ExHell_tests
  ${UTIL_TEST_SOURCES}
  ${UTIL_SOURCES}
)

target_include_directories(ExHell_tests PRIVATE
  src
  src/util
)

target_link_libraries(ExHell_tests
  GTest::gtest_main
  Qt6::Core
)

enable_testing()
gtest_discover_tests(ExHell_tests)