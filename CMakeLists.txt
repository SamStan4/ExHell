cmake_minimum_required(VERSION 3.28.3)
project(ExHell)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

set(UI_SOURCES
  src/ui/main_ui_controller.cpp
  src/ui/main_ui_controller.hpp
)

set(WRAPPER_SOURCES
  src/exhell_wrapper.cpp
  src/exhell_wrapper.hpp
)

set(MAIN_SRC
  src/main.cpp
)

add_executable(ExHell
  ${MAIN_SRC}
  ${WRAPPER_SOURCES}
  ${UI_SOURCES}
)

target_include_directories(ExHell PRIVATE
  src
  src/ui
)

target_link_libraries(ExHell
  Qt6::Core
  Qt6::Gui
  Qt6::Widgets
)