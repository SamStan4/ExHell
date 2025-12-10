#if COMPILE_TIME_STATUS_LOGS
  #pragma message("compiling text_node.cpp")
#endif

#include "engine/cell_node/text_node/text_node.hpp"
#include "engine/cell_node/cell_node_type.hpp"

exhell::text_node::text_node() {
}

exhell::text_node::~text_node() {
}

exhell::cell_node_type exhell::text_node::get_node_type() const noexcept {
  return exhell::cell_node_type::TEXT_NODE;
}

exhell::text_node* exhell::text_node::make_new_text_node() {
  return new text_node();
}