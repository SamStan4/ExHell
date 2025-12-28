add_subdirectory(cell_node)

add_library(exhell_engine
  # TODO: add sources if I ever make any
)

target_link_libraries(exhell_engine
  PUBLIC
    exhell_cell_node
)