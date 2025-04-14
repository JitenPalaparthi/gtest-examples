#ifndef UTILITY_OPERATIONS_H
#define UTILITY_OPERATIONS_H

#include <functional>
#include <stdexcept>

void apply_function(int x,const std::function<int(int)>& func);

std::function<int(int)> create_multiplier(int factor);

#endif