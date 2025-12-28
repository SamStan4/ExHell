set(WRAPPER_SOURCES
  exhell_wrapper.cpp
  exhell_wrapper.hpp
)

set(MACRO_SOURCE
  exhell_macros.hpp
)

set(MAIN_SRC
  main.cpp
)

add_subdirectory(util)
add_subdirectory(ui)
add_subdirectory(engine)
add_subdirectory(persistence)

add_executable(ExHell
  ${WRAPPER_SOURCES}
  ${MACRO_SOURCE}
  ${MAIN_SRC}
)

target_link_libraries(ExHell
  PRIVATE
    exhell_util
    exhell_ui
    exhell_engine
    exhell_persistence
)

target_include_directories(ExHell
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)