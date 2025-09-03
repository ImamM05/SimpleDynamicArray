#include <iostream>
#include "DynamicArray.h"
using namespace std;

int main()
{
    DynamicArray arr;

    cout << "Inserting 1.3" << endl;
    arr.insert(1.3);
    cout << '[';
    for (int i = 0; i < arr.get_size(); i++)
    {
        cout << arr[i];
        if (i != arr.get_size() - 1)
        {
            cout << ", ";
        }
    }
    cout << ']' << endl << endl;
    
    cout << "Inserting 2.2" << endl;
    arr.insert(2.2);
    cout << '[';
    for (int i = 0; i < arr.get_size(); i++)
    {
        cout << arr[i];
        if (i != arr.get_size() - 1)
        {
            cout << ", ";
        }
    }
    cout << ']' << endl << endl;

    cout << "Inserting 1" << endl;
    arr.insert(1);
    cout << '[';
    for (int i = 0; i < arr.get_size(); i++)
    {
        cout << arr[i];
        if (i != arr.get_size() - 1)
        {
            cout << ", ";
        }
    }
    cout << ']' << endl << endl;

    cout << "Inserting 3.4 at index 1" << endl;
    arr.insert(3.4, 1);
    cout << '[';
    for (int i = 0; i < arr.get_size(); i++)
    {
        cout << arr[i];
        if (i != arr.get_size() - 1)
        {
            cout << ", ";
        }
    }
    cout << ']' << endl << endl;

    cout << "Inserting 100.2 at index 0"<< endl;
    arr.insert(100.2, 0);
    cout << '[';
    for (int i = 0; i < arr.get_size(); i++)
    {
        cout << arr[i];
        if (i != arr.get_size() - 1)
        {
            cout << ", ";
        }
    }
    cout << ']' << endl << endl;

    cout << "Removing 1"<< endl;
    arr.remove(1);
    cout << '[';
    for (int i = 0; i < arr.get_size(); i++)
    {
        cout << arr[i];
        if (i != arr.get_size() - 1)
        {
            cout << ", ";
        }
    }
    cout << ']' << endl << endl;

    cout << "Removing 1.3"<< endl;
    arr.remove(1.3);
    cout << '[';
    for (int i = 0; i < arr.get_size(); i++)
    {
        cout << arr[i];
        if (i != arr.get_size() - 1)
        {
            cout << ", ";
        }
    }
    cout << ']' << endl << endl;

    return 0;
}