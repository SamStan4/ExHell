#pragma once

#if COMPILE_TIME_STATUS_LOGS
  #pragma message("compiling cell_node_base.hpp")
#endif

#include <string>

#include "exhell_macros.hpp"
#include "engine/cell_node/cell_node_type.hpp"

namespace exhell {
  class cell_node_base {

    public:

      /**
       * @brief Construct a new cell node base object
       *
       */
      cell_node_base();

      /**
       * @brief Destroy the cell node base object
       * 
       */
      ~cell_node_base();

      /**
       * @brief Get the simple type name of the cell_node.
       *        e.g.     logic_node -> "logic"
       *                 text_node ->  "text"
       * 
       * @return std::string 
       */
      std::string get_simple_type_name() const;

      /**
       * @brief Get the node type object. This returns the type that the cell node is.
       *        e.g.     logic_node -> exhell::cell_node_type::LOGIC_NODE
       *                 text_node ->  exhell::cell_node_type::TEXT_NODE
       * 
       * @return cell_node_type 
       */
      virtual cell_node_type get_node_type() const noexcept = 0;

    private:

  };
}