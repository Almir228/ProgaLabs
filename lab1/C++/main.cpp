#include "func.h"


int main() {
    value = Mass(value1,1e5, 1e6,1e4);
    for (auto i : value)
    {

        long double t1 = 0.0, t2 = 0.0;
        massive(v, i);
        clock_t begin, end;
//        begin = ::clock();
//        for (int j = 0; j < 1000000; ++j)
//        {
//            Bin_Search(v, -1);
//        }
//
//        end = ::clock();
//        t1 += (long double)(end - begin) / CLOCKS_PER_SEC;
//        OUT("data.csv", i, t1);
        begin = ::clock();
        for (int j = 0; j < 10000; ++j)
        {
            search(v, i, -1);
        }
        end = ::clock();
        t2 += (long double)(end - begin) / CLOCKS_PER_SEC;
        OUT("data.csv", i, t2);
    }
    return 0;
}
