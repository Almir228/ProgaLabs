#include "func.h"

int main() {
    vector<int> value;
    Mass(value, 1e2, 1e3, 5e2);
    Mass(value, 1e3, 1e4, 5e3);
    Mass(value, 1e4, 1e5, 1e4);
    Mass(value, 1e5, 1e6, 1e5);
    vector<int> var;
    for (auto i:value)
    {

        long double t1 = 0.0, t2 = 0.0;
        massive(var, i);
        int key;
        key = var[rand()%var.size()];
        cout << key;
        clock_t begin = ::clock();
//        for (int j = 0; j < 1000000; ++j)
//        {
//            Bin_Search(var, key);
//        }

        clock_t end = ::clock();
        t1 += (long double)(end - begin) / CLOCKS_PER_SEC;
        begin = ::clock();
        for (int j = 0; j < 10000; ++j)
        {
            search(var, key);
        }
        end = ::clock();
        t2 += (long double)(end - begin) / CLOCKS_PER_SEC;

        OUT("data.txt", i, t2);
    }
    return 0;
}
