//
// Created by ROG on 2021/11/19.
//

#include <iostream>
#include "vector"
#include "string"
#include "algorithm"

using namespace std;

class Employee{
    static int no ;
    string name ;
    int No;
public:
    Employee(string &s) {
        name = s;
        No=no+1;
    }

    Employee(int no) : No(no) {}
};

int main() {

    return 0;
}