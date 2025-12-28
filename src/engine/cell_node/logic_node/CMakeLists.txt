set(LOGIC_NODE_SRC
  logic_node.cpp
  logic_node.hpp
)

add_library(exhell_logic_node
  ${LOGIC_NODE_SRC}
)

target_include_directories(exhell_logic_node
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)