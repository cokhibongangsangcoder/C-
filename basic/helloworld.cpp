#include <iostream>

using namespace std;
int main(){
    int* p; // declade but not init
    int var = 5; // init
    p = &var; // init for ptr
    cout << "address of p : " << p << endl; // show value of ptr p
    cout << "value of var : " << *(&var) << endl; // dereference
    cout << "value that p point to : " << *p << endl; // same as above but through pointer p
}