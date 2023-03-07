#include "func.h"
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"


int main(){
    vector<int> value;
    Mass(value, 1e2, 1e3, 5e2);
    Mass(value, 1e3, 1e4,   2e3);
    Mass(value, 1e4, 1e5, 0.2e4);
    vector<int> var;
    for (auto i:value){
//        massive(var, i);
        massive2(var, i);
        long double t;
        int key = ::rand()%var.size();
        clock_t begin, end;
//        begin = ::clock();
//        for (int j = 0; j <10000 ; ++j) {
//            swap_B(-1, var);
//        }
//        end = ::clock();

        vvod_0(indexes, var.size());
        begin = ::clock();
        for (int j = 0; j <10000 ; ++j) {
            swap_C(-1, var);
        }
        end = ::clock();


//        begin = ::clock();
//        for (int j = 0; j <10000 ; ++j) {
//            swap_A(-1, var);
//        }
//        end = ::clock();
        t = (long double)(end - begin)/CLOCKS_PER_SEC;
        OUT("/Users/almairo/CLionProjects/untitled3/data.txt", i, t);
    }
    return 0;
}
