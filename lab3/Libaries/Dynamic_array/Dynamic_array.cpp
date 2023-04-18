#include <iostream>


struct DynamicArray{
    int* value;
    int size;
    int step;
};


DynamicArray create_array(int size) {
    DynamicArray arr{};
    arr.value = new int[size];
    arr.size = size;
    return arr;
}


DynamicArray fill_array(int size, int step) {
    DynamicArray arr{};
    arr.value = new int[size];
    arr.size = size;
    arr.step = step;
    return arr;
}

void delete_array(DynamicArray arr) {
    delete[] arr.value;
}



void delete_ell(DynamicArray *arr, int index){
    for (int i = index; i < arr->size-1; i++) {
        arr->value[i] = arr->value[i + 1];
    }
    --arr->size;
}

void print_array(DynamicArray arr){
    for (int i = 0; i < arr.size; ++i){
        std::cout<< arr.value[i]<< ' ';
    }
    std::cout<<'\n';
}


DynamicArray resize_x_2(DynamicArray arr) {
    DynamicArray newArr{};
    int newSize = arr.size*2;
    newArr.value = new int[newSize];
    newArr.size = newSize;
    for (int i = 0; i < arr.size; i++) {
        newArr.value[i] = arr.value[i];
    }
    delete[] arr.value;
    return newArr;
}

DynamicArray resize_plus_1(DynamicArray arr) {
    DynamicArray newArr{};
    int newSize = arr.size + 1;
    newArr.value = new int[newSize];
    newArr.size = newSize;
    for (int i = 0; i < arr.size; i++) {
        newArr.value[i] = arr.value[i];
    }
    delete[] arr.value;
    return newArr;
}

DynamicArray resize_const(DynamicArray arr) {
    DynamicArray newArr{};
    int newSize = arr.size+arr.step;
    newArr.value = new int[newSize];
    newArr.size = newSize;
    newArr.step = arr.step;
    for (int i = 0; i < arr.size; i++) {
        newArr.value[i] = arr.value[i];
    }
    delete[] arr.value;
    return newArr;
}

int get_value(DynamicArray arr, int index) {
    if (index >= 0 && index < arr.size) {
        return arr.value[index];
    }
    return -1;
}

void push_back(DynamicArray* arr, int value, DynamicArray (*func)(DynamicArray arr)){
    int size = arr->size;
    *arr = func(*arr);
    arr->value[size] = value;
}

void set_value (DynamicArray* arr, int index, int value,
                DynamicArray (*func)(DynamicArray arr)){
    if (index >= 0 && index < arr->size) {
        arr->value[index] = value;
    }
    else if (index >= 0 && index == arr->size) {
        push_back(arr, value, func);
    }
    else{
        std::cout<<"Error: Index out of range."<<std::endl;
    }
}