/*!
 * Copyright (c) 2017 by Contributors
 * \file get_num_feature.h
 * \author Philip Cho
 * \brief template for get_num_feature() function in generated C code
 */
#ifndef TREELITE_COMPILER_NATIVE_GET_NUM_FEATURE_H_
#define TREELITE_COMPILER_NATIVE_GET_NUM_FEATURE_H_

#include <string>

namespace treelite {
namespace compiler {
namespace native {

inline std::string get_num_feature_func(int num_feature) {
  std::ostringstream oss;
  oss << "size_t get_num_feature(void) {\n"
      << "  return " << num_feature << ";\n"
      << "}\n";
  return oss.str();
}

inline std::string get_num_feature_func_prototype() {
  return "size_t get_num_feature(void);\n";
}

}  // namespace native
}  // namespace compiler
}  // namespace treelite
#endif  // TREELITE_COMPILER_NATIVE_GET_NUM_FEATURE_H_
