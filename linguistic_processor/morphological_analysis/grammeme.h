#pragma once

#include <boost/utility/string_view.hpp>

namespace linguistic_processor {
namespace morphological_analysis {

struct Grammeme {
    boost::string_view parent;
    boost::string_view name;
    boost::string_view alias;
    boost::string_view description;
};

Grammeme FindGrammeme(boost::string_view str);

} // namespace morphological_analysis
} // namespace linguistic_processor
