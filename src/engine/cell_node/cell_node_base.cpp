#if COMPILE_TIME_STATUS_LOGS
  #pragma message("compiling cell_node_base.cpp")
#endif

#include <stdexcept>

#include "engine/cell_node/cell_node_base.hpp"

exhell::cell_node_base::cell_node_base() {
}

exhell::cell_node_base::~cell_node_base() {
}

std::string exhell::cell_node_base::get_simple_type_name() const {
  switch (this->get_node_type()) {
    case exhell::cell_node_type::LOGIC_NODE: return "logic";
    case exhell::cell_node_type::TEXT_NODE:  return "text";
    default: throw std::runtime_error("unsupported cell type");
  }
}