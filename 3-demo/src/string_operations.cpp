#include "../include/string_operations.h"

std::string reverse_string(const std::string&  str){
    return std::string(str.rbegin(),str.rend());
}

bool is_palindrom(const std::string& str){
    return str == reverse_string(str);
}

