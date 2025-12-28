set(CELL_NODE_SRC
  cell_node_base.cpp
  cell_node_base.hpp
  cell_node_type.hpp
)

add_subdirectory(logic_node)
add_subdirectory(text_node)


add_library(exhell_cell_node
  ${CELL_NODE_SRC}
)

target_link_libraries(exhell_cell_node
  PUBLIC
    exhell_logic_node
    exhell_text_node
)

target_include_directories(exhell_cell_node
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)