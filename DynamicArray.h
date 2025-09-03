#include <iostream>
#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H
using namespace std;

class DynamicArray
{
    public:
        typedef double val_type;
        DynamicArray();
        ~DynamicArray();
        void insert(const val_type& item, const int& index = -1);
        void remove(const val_type& item);
        val_type operator[](int index);
        int get_size();
    
    private:
        val_type* data;
        int capacity;
        int size;
        int cursor;
        void resize(int new_cap);
        void next_cursor();
        int index(const val_type& item);
};

#endif