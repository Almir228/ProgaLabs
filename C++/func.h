#include <iostream>
#include <vector>
#include <ctime>
#include "fstream"
#include "string"
#include <cstdlib>
#include "string"

using namespace std;

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
        var.push_back(i);
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
int Bin_Search(vector<int>& var, int val)
{
    int l = 0, r;
    r = var.size() - 1;

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
int search (vector<int>& var, int val)
{
    for (int i = 0; i < var.size() ; ++i){
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

int search_sum(vector<int>& var, int n){
    for (int i = 0; i < var.size(); ++i) {
        if (search(var, n-i) >=0 and search(var, n-i) !=0)
            return (i, search(var, n-i));
    }
    return -1;
}

int Bin_search_sum(vector<int>& var, int n){
    int lt = 0; // первый, то есть левый
    int rt = var.size() - 1; // второй, то есть правый
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

int swap_A(int number, vector<int>& mass) {

    int res = search(mass, number);
    if (res != -1) {
        int tmp = mass[0];
        mass[0] = mass[res];
        mass[res] = tmp;
    }
    return res;
}

int swap_B(int number, vector<int>& mass){
    int res = search(mass, number);
    if(res>1){
        int tmp = mass[res-1];
        mass[res-1] = mass[res];
        mass[res] = tmp;
    }
    return res;
}

int swap_C(int number, vector<int>& mass){
    int res = search(mass, number);
    if(res>-1){
        indexes[res]++;
        if(res>0){
            if(indexes[res] > indexes[res - 1]){
                (mass[res], mass[res - 1]) = (mass[res - 1], mass[res]);
                (indexes[res], indexes[res - 1]) = (indexes[res - 1], indexes[res]);
            }
        }
    }
    return res;
}

