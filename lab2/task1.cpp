#include "Function.h"


void test_back()
{
    vector<int> arr = {5, 3, 1, 4, 2};
    backwardPass(arr, 0, 5);
    printArray(arr);
}

void test_forward()
{
    vector<int> arr = {5, 3, 1, 4, 2};
    forwardPass(arr, 0, 5);
    printArray(arr);
}

void test_shaker()
{
    vector<int> arr = {5, 3, 1, 4, 2};
    shakerSort(arr);
    printArray(arr);
}


int main() {
    vector<int> arr = {5, 3, 1, 4, 2};
    cout << "Before sorting: " << endl;
    printArray(arr);
    cout << "After sorting: " << endl;
    test_back();
    test_forward();
    test_shaker();


    return 0;
}