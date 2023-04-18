#pragma
#include <iostream>


struct DynamicArray {
    int *value;
    int size;
};

DynamicArray create_array(int size);
void delete_array(DynamicArray arr);
void delete_ell(DynamicArray *arr, int index);
void print_array(DynamicArray arr);
DynamicArray resize_x_2(DynamicArray arr);
int get_value(DynamicArray arr, int index);
void push_back(DynamicArray* arr, int value);
void set_value (DynamicArray* arr, int index, int value);
DynamicArray fill_array(int size, int step);
