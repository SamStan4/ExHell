set(UTIL_SOURCES
  exhell_utility_functions.cpp
  exhell_utility_functions.hpp
)

add_library(exhell_util
  ${UTIL_SOURCES}
)

target_include_directories(exhell_util
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)