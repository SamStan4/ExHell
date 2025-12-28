set(PERSISTENCE_SRC
  exhell_serializer_base.cpp
  exhell_serializer_base.hpp
)

add_subdirectory(csv)
add_subdirectory(json)
add_subdirectory(xml)

add_library(exhell_persistence
  ${PERSISTENCE_SRC}
)

target_link_libraries(exhell_persistence
  PUBLIC
    exhell_csv
    exhell_json
    exhell_xml
)

target_include_directories(exhell_persistence
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)