#include "Function.h"


int main() {
    value = Mass(value1,1e5, 1e6,1e4);
    for (auto i: value) {
        vector<int> arr = generate_random_vector(i, 0, 10*i);
        auto t = m_time(arr, shellSort1);
        if (check_order(arr, i))
            break;
        OUT("data3.csv", i, t);
    }
    for (auto i: value) {
        vector<int> arr = generate_random_vector(i, 0, 10*i);
        auto k = shellSort1(arr);
        OUT("data4.csv", i, k);
    }
    for (auto i: value) {
        vector<int> arr = generate_random_vector(i, 0, 10*i);
        auto t = m_time(arr, shellSort2);
        if (check_order(arr, i))
            break;
        OUT("data5.csv", i, t);
    }
    for (auto i: value) {
        vector<int> arr = generate_random_vector(i, 0, 10*i);
        auto k = shellSort2(arr);
        OUT("data6.csv", i, k);
    }
    for (auto i: value) {
        vector<int> arr = generate_random_vector(i, 0, 10*i);
        auto t = m_time(arr, shellSort3);
        if (check_order(arr, i))
            break;
        OUT("data7.csv", i, t);
    }
    for (auto i: value) {
        vector<int> arr = generate_random_vector(i, 0, 10*i);
        auto k = shellSort3(arr);
        OUT("data8.csv", i, k);
    }
    return 0;
}