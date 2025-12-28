set(XML_SRC
  exhell_xml_serializer.cpp
  exhell_xml_serializer.hpp
)

add_library(exhell_xml
  ${XML_SRC}
)

target_include_directories(exhell_xml
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/..
)