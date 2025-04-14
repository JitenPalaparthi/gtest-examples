#include "../include/utility_operations.h"

void apply_function(int x,const std::function<int(int)>& func){
    if(!func){
        throw std::invalid_argument("Function is not callable");
    }
    func(x);
}

std::function<int(int)> create_multiplier(int factor){
    return [factor](int value){
        return factor * value;
    };
}
