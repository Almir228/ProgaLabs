#include "func.h"
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"


int main(){
    value = Mass(value1,1e5, 1e6,1e4);
    for (auto i:value){
        massive(v, i);
//        massive2(v, i);
        long double t;
        int key = ::rand()%v.size();
        clock_t begin, end;
        vvod_0(indexes, i);

        begin = ::clock();
        for (int j = 0; j < 10000; ++j) {
            auto k = (::rand())%i;
                swap_A(v, i, v[k]);
        }
        end = ::clock();

        t = (long double)(end - begin);
        OUT("data.csv", i, t);
    }
    return 0;
}
