#include <iostream>
#include <vector>
#include <ctime>
#include "fstream"
#include "string"
#include <cstdlib>
#include "string"

using namespace std;


vector<int> value;
vector<int> value1 = {100, 2000, 5000, 7000, 10000, 15000, 20000, 40000, 50000, 100000};
vector<int> v;
vector<int> indexes;

vector<int> vvod_0(vector<int>& var, int n)
{
    for (int i = 0; i < n; ++i)
    {
        var.push_back(0);
    }
    return var;
}

//создание массива
vector<int> massive (vector<int>& var, int n)
{
    for (int i = 0; i < n; ++i)
    {
        var.push_back(abs(::rand()));
    }
    return var;
}

vector<int> massive2 (vector<int>& var, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i%(::rand()) == 0)
            var.push_back(-1);
        else
            var.push_back(i);
    }
    return var;
}

//заполнение массива
vector<int> Mass ( vector<int>& var, int start, int end, int step)
{
    for (int i = start; i < end; i+=step)
    {
        var.push_back(i);
    }
    return var;
}

//Бинарный поиск
int Bin_Search(vector<int>& var, int n, int val)
{
    int l = 0, r;
    r = n - 1;

    while (r > l)
    {
        int m = (l + r) / 2;

        if (val > var[m])
            l = m + 1;
        else if (var[m] > val)
            r = m - 1;
        else
            return m;
    }

    return -1;
}

//Линейный поиск
int search (vector<int>& var, int n, int val)
{
    for (int i = 0; i < n; ++i){
        if (var[i] == val)
            return i;
    }
    return -1;
}

//вывод массива
void print (vector<int>& var){
    for(int i : var){
        cout << i;
    }
}

//вывод в файл
void OUT (string file, int n, long double t){
    std::ofstream out(file, std::ios::app);
    if (out.is_open())
    {
        out << setprecision(1000) << n << ";" << t <<std::endl;
    }
    out.close();
}

int search_sum(vector<int>& var, int n, int size){
    for (int i = 0; i < var.size(); ++i) {
        if (search(var, size, n-i) >=0 and search(var, size, n-i) !=0)
            return (i, search(var, size, n-i));
    }
    return -1;
}

int Bin_search_sum(vector<int>& var, int n, int size){
    int lt = 0; // первый, то есть левый
    int rt = size - 1; // второй, то есть правый
    while (lt != rt)
    {
        int cursum = var[lt] + var[rt];
        if (cursum < n)
            lt++;
        else if (cursum > n)
            rt--;
        else
        {
            return (rt, lt);
        }
    }
    return -1;
}

int swap_A(vector<int>& var, int size, int el){
    int tmp = 0;
    for (int i = 0; i < size; ++i) {
        if (var[i] == el){
            tmp = var[0];
            var[0] = var[i];
            var[i] = tmp;
            return i;
        }
    }
    return -1;
}

int swap_B(vector<int>& var, int size, int el){
    int tmp = 0;
    for (int i = 0; i < size; ++i) {
        if (var[i] == el){
            if (i>0) {
                tmp = var[i];
                var[i] = var[i - 1];
                var[i - 1] = tmp;
            }
            return i;
        }
    }
    return -1;
}

int swap_C(vector<int>& var, int size, int el){
    int ind[size];
    for (int i = 0; i < size; ++i){
        ind[i] = 0;
    }

    for (int i = 0; i < size; ++i) {
        if (var[i] == el){
            int tmp = 0;
            ++ind[i];
            if (i>0 and ind[i]>ind[i-1]) {
                tmp = var[i];
                var[i] = var[i - 1];
                var[i - 1] = tmp;
            }
            return i;
        }
    }
    return -1;
}


