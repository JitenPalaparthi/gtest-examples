#include "../include/array_operations.h"

int find_max(const std::vector<int>& numbers){
    if(numbers.empty()){
        throw std::invalid_argument("Empty vector has no maximum");
    }
    int max_val =numbers[0];
    for(int num : numbers){
        if (num >max_val){
            max_val=num;
        }
    }
    return max_val;
}