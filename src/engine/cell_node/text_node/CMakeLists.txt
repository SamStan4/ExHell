set(TEXT_NODE_SRC
  text_node.cpp
  text_node.hpp
)

add_library(exhell_text_node
  ${TEXT_NODE_SRC}
)

target_include_directories(exhell_text_node
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/..
)