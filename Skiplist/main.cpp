#include "Skiplist.cpp"


int main(){
    Skiplist<int> A;
    cout << A.empty() << endl;
    A.insert(43);
    A.insert(43);
    for (int i = 0; i < 20; i++){
        A.insert(43);
        A.insert(random(0, 100));
    }
    cout << A.empty() << endl;
    cout << A.size() << endl;
    cout << A.max_height() << endl;
    using It = Skiplist<int>::iterator;
    using RIt = Skiplist<int>::reverse_iterator;
    It it_st = A.begin();
    It it_fin = A.end();
    for (auto it = it_st; it != it_fin; it++){
        cout << *(it) << endl;
    }
    cout << A.count(43) << endl;
    It* x = A.equal_range(43);
    for (auto it = x[0]; it != x[1]; it++){
        cout << *(it) << endl;
    }
    delete [] x;
    return 0;
}