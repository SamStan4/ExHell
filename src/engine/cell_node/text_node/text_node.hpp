#pragma once

#if COMPILE_TIME_STATUS_LOGS
  #pragma message("compiling text_node.hpp")
#endif

#include <memory>

#include "engine/cell_node/cell_node_base.hpp"
#include "engine/cell_node/cell_node_type.hpp"

namespace exhell {
  
  class text_node : public cell_node_base {

    public:

    /**
     * @brief Construct a new text node object
     * 
     */
    text_node();

    /**
     * @brief Destroy the text node object
     * 
     */
    ~text_node();

    /**
     * @brief Get the node type object. In this case, we return exhell::cell_node_type::TEXT_NODE
     * 
     * @return exhell::cell_node_type::TEXT_NODE
     */
    cell_node_type get_node_type() const noexcept override;

    /**
     * @brief Creates a new text node object on the heap.
     * 
     * @return text_node* 
     */
    static text_node* make_new_text_node();

    private:

  };
}