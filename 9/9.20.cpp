//
// Created by ROG on 2021/10/13.
//

#include <iostream>
#include "vector"
#include "string"
#include "list"
#include "deque"

using namespace std;

int main() {
    list<int> list={1,2,3,4,5,6,7,8,9};
    deque<int> ji;
    deque<int> ou;
    for (auto & a: list) {
        if (a % 2 == 0) {
            ou.push_back(a);
        }
        else {
            ji.push_back(a);
        }
    }
    for (auto & a: ou) {
        cout << a << "";
    }
    cout << endl;
    for (auto a: ji) {
        cout << a << "";
    }

    return 0;
}

