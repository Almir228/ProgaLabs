#include "func.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"



int main() {
    vector<int> value;
    vector<int> value1 = {100, 200, 400, 500, 800, 1000, 1200, 1400,1500,
                          1800, 2000, 2500, 3000, 4000, 5000, 7000, 10000,
                          15000, 20000, 25000, 30000, 40000, 50000, 75000, 100000};
    value = Mass(value1,1e5, 1e6,1e4);
    vector<int> var;
    for (auto i : value)
    {

        long double t1 = 0.0, t2 = 0.0;
        massive(var, i);
        clock_t begin = ::clock();
//        for (int j = 0; j < 1000000; ++j)
//        {
//            Bin_Search(var, -1);
//        }
//
        clock_t end = ::clock();
        t1 += (long double)(end - begin) / CLOCKS_PER_SEC;
        begin = ::clock();
        for (int j = 0; j < 10000; ++j)
        {
            search(var, -1);
        }
        end = ::clock();
        t2 += (long double)(end - begin) / CLOCKS_PER_SEC;

        std::ofstream out("/Users/almairo/CLionProjects/untitled3/data.txt", std::ios::app);
        if (out.is_open())
        {
            out << setprecision(1000) << i << ";" << t2 <<std::endl;
        }
        out.close();
    }
    return 0;
}
