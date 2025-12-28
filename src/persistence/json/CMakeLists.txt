set(JSON_SRC
  exhell_json_serializer.cpp
  exhell_json_serializer.hpp
)

add_library(exhell_json
  ${JSON_SRC}
)

target_include_directories(exhell_json
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/..
)