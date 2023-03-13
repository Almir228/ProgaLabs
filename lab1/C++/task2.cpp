#include "func.h"

int main(){
    value = Mass(value1,1e5, 1e6,1e4);
    for (auto i:value){
        massive(v, i);
        long double t;
        clock_t begin, end;
//        begin = ::clock();
//        search_sum(v, i, -1);
//        end = ::clock();
        begin = ::clock();
            Bin_search_sum(v,-1,i);
        end = ::clock();
        t = (long double)(end - begin);
        OUT("data.csv", i, t);
    }
}

#pragma clang diagnostic pop