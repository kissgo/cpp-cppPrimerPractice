#include <iostream>
#include "vector"
using namespace std;

//void swap (int* a , int *b ){
//    int c = 0;
//    c= *a;
//    *a=*b;
//    *b=c;
//
//}
//void swap (int& a , int &b ){
//    int c = 0;
//    c= a;
//    a=b;
//    b=c;
//
//}

int hanshu(int a, int b){return  a+b ;}

int main() {
    vector<decltype(hanshu) *> vec;
    vec.push_back(hanshu);

    cout << vec[0](1,2);
    return 0;
}