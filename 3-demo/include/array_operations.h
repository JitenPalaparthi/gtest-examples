#ifndef ARRAY_OPERATIONS_H
#define ARRAY_OPERATIONS_H

#include <vector>
#include <stdexcept>

int find_max(const std::vector<int>& numbers);
// Template swap functon
template <typename T>
void swap_values(T& a,T& b){
    T temp = a;
    a = b;
    b= temp;
}
#endif