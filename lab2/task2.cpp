#include "Function.h"



int main() {
    value = Mass(value1,1e5, 1e6,1e4);
//    for (auto i: value) {
//        vector<int> arr = generate_random_vector(i, 0, 10*i);
//        auto t = m_time(arr, combSort);
//        if (check_order(arr, i))
//            break;
//        OUT("data2.csv", i, t);
//    }
    for (auto i: value) {
        vector<int> arr = generate_random_vector(i, 0, 10*i);
        auto k = combSort(arr);
        OUT("data2.csv", i, k);
    }
    return 0;
}