set(UI_SOURCES
  exhell_main_view.cpp
  exhell_main_view.hpp
  spreadsheet_main_view.cpp
  spreadsheet_main_view.hpp
)

add_library(exhell_ui
  ${UI_SOURCES}
)

target_link_libraries(exhell_ui
  PUBLIC
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
)

target_include_directories(exhell_ui
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/..
    ${CMAKE_CURRENT_SOURCE_DIR}/../util
)