#ifndef CLASS_OPERATIONS_H
#define CLASS_OPERATIONS_H

#include <stdexcept>
class Counter{
    private:
        int count;
    public:
    Counter():count(0){}
    void increment();
    int get_count() const;
};
#endif