#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>
#include <fstream>

using namespace std;


vector<int> value;
vector<int> value1 = {100, 2000, 5000, 7000, 10000, 15000, 20000, 40000, 50000, 100000};

std::vector<int> fibonacci(int n)
{
    std::vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);
    int k = 1;
    while(fib[k] + fib[k - 1] < n){
        fib.push_back(fib[k] + fib[k - 1]);
        k++;
    }
    std::reverse(fib.begin(), fib.end());
    return fib;
}

void add (vector<int>& arr, int n)
{
    for (int i = 0; i < n; ++i) {
        arr.push_back(n-i);
    }
}


long double m_time(vector<int>& arr,int (*func)(vector<int>&)) {

    auto begin = ::clock();
    func(arr);
    auto end = ::clock();

    auto t = (long double)(end - begin);
    return t;
}

void OUT (string file, int n, long double t){
    std::ofstream out(file, std::ios::app);
    if (out.is_open())
        out << setprecision(1000) << n << ";" << t << std::endl;

    out.close();
}

vector<int> Mass ( vector<int>& var, int start, int end, int step)
{
    for (int i = start; i < end; i+=step)
    {
        var.push_back(i);
    }
    return var;
}


vector<int> generate_random_vector(int size, int min_val, int max_val) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min_val, max_val);

    vector<int> result(size);

    for (int i = 0; i < size; ++i) {
        result[i] = dis(gen);
    }

    return result;
}



//Функции по заданию

// Функция проверки порядка элементов в массиве с заданным шагом
int check_order(vector<int>& arr, int n, int gap = 1, bool swapped = false) {
    auto k = 0;
    for (int i = 0; n - gap > i; i++) {
        int j = i + gap;
        if (arr[i] > arr[j]){
            if(swapped)
                swap(arr[i], arr[j]);
            k++;
        }
    }
    return k;
}

// Основная функция сортировки расческой
int combSort(vector<int>& arr) {
    int n = arr.size();
    int gap = n; // начальный шаг
    int k = 0;
    bool swapped = true;
    while (gap != 1 || swapped) { // продолжаем, пока шаг не будет равен 1 и не было перестановок
        gap = (gap * 10) / 13; // уменьшаем шаг на фактор 1.3
        if (gap < 1) gap = 1; // шаг не может быть меньше 1
        swapped = false;
        k+=check_order(arr, n, gap, true); // проверяем порядок элементов с текущим шагом
        for (int i = 0; i < n - 1; i++) { // обычная сортировка пузырьком
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
    }
    return k;
}

int shellSort1(vector<int>& arr) {
    int k = 0;
    auto n = (int)arr.size();
    int h = 1;
    while(h<=n)
        h = 2*h;
    while (h >= 1) {
        for (int i = h; i < n; i++) {
            for (int j = i; j >= h && arr[j] < arr[j-h]; j -= h) {
                std::swap(arr[j], arr[j-h]);
                k++;
            }
        }
        h = h/2;
    }
    return k;
}

int shellSort2(vector<int>& arr) {
    int k = 0;
    auto n = (int)arr.size();
    auto h = 0;
    auto i = 1;
    while(h<=n) {
        h = (int)::pow(2,i) - 1;
        i++;
    }
    while (i >= 0) {
        for (int r = h; r < n; r++) {
            for (int j = r; j >= h && arr[j] < arr[j - h]; j -= h) {
                std::swap(arr[j], arr[j-h]);
                k++;
            }
        }
        h = (int)::pow(2,i) - 1;
        i--;
    }
    return k;
}

int shellSort3(vector<int>& arr) {
    int k = 0;
    auto n = (int)arr.size();
    auto fib = fibonacci(n);
    for (auto h: fib){
        for (int r = h; r < n; r++) {
            for (int j = r; j >= h && arr[j] < arr[j - h]; j -= h) {
                std::swap(arr[j], arr[j-h]);
                k++;
            }
        }
    }
    return k;
}

void forwardPass(vector<int>& arr, int left, int right) {
    for (int i = left; i < right; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void backwardPass(vector<int>& arr, int left, int right) {
    for (int i = right; i > left; i--) {
        if (arr[i] < arr[i - 1]) {
            swap(arr[i], arr[i - 1]);
        }
    }
}

void shakerSort(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        forwardPass(arr, left, right);
        right--;

        backwardPass(arr, left, right);
        left++;
    }
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}


