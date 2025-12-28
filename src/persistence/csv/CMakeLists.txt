set(CSV_SRC
  exhell_csv_serializer.cpp
  exhell_csv_serializer.hpp
)

add_library(exhell_csv
  ${CSV_SRC}
)

target_include_directories(exhell_csv
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/..
)