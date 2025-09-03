#include <iostream>
#include "DynamicArray.h"
#include "cassert"
using namespace std;


DynamicArray::DynamicArray()
{
    capacity = 2;
    size = 0;
    cursor = -1;
    data = new val_type[capacity];
}

DynamicArray::~DynamicArray()
{
    delete[] data;
}

void DynamicArray::next_cursor()
{
    cursor++;
}

void DynamicArray::insert(const val_type& item, const int &index)
{
    if (capacity == size)
    {
        resize(capacity*2);
    }

    size++;
    if (index == -1)
    {
        next_cursor();
        data[cursor] = item;
    }
    else
    {
        for (unsigned int i = size; i > index; i--)
        {
            data[i] = data[i-1];
        }
        data[index] = item;
    }
}

void DynamicArray::remove(const val_type& item)
{
    assert (size > 0);
    int indexToRemove = index(item);

    if (indexToRemove == -1)
    {
       cout << item << " not in the array." << endl; 
    }
    else if (indexToRemove == size - 1)
    {
        size--;
    }
    else
    {
        for (unsigned int i = item; i < size-1; i++)
        {
            data[i] = data[i+1];
        }
        size--;
    }
}



DynamicArray::val_type DynamicArray::operator[](int index)
{
    return data[index];
}

int DynamicArray::get_size()
{
    return size;
}

int DynamicArray::index(const val_type& item)
{
    int ind = -1;
    for (unsigned int i = 0; i < size; i++)
    {
        if (data[i] == item)
        {
            ind = i;
            break;
        }
    }
    return ind;
}

void DynamicArray::resize(int new_cap)
{
    val_type* new_data = new val_type[new_cap];
    for (unsigned int i = 0; i < size; i++)
    {
        new_data[i] = data[i];
    } 
    delete[] data; //deletes the memory
    data = new_data; // data pointer now points to new_data
    capacity = new_cap;
}
