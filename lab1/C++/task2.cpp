#include "func.h"

int main(){
    vector<int> value;
    Mass(value, 1e2, 1e3, 5e2);
    Mass(value, 1e3, 1e4, 0.2e3);
    Mass(value, 1e4, 1e5, 0.2e4);
    vector<int> var;
    for (auto i:value){
        massive(var, i);
        long double t;
        clock_t begin, end;
//        begin = ::clock();
//        search_sum(var, -1);
//        end = ::clock();
        begin = ::clock();
        for (int j = 0; j <100000 ; ++j) {
            Bin_search_sum(var, -1);
        }
        end = ::clock();
        t = (long double)(end - begin)/CLOCKS_PER_SEC;
        OUT("/Users/almairo/CLionProjects/untitled3/data.txt", i, t);
    }
}
