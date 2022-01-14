//
// Created by ROG on 2021/10/27.
//

#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include "list"

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    list<int> ls;

    //vector<int>::reverse_iterator beg( vec.rbegin() + 3);
    //vector<int>::reverse_iterator end( vec.rend() - 2);
    auto beg = vec.rbegin() + 3;
    auto end = vec.rend() - 2;
    copy(vec.rbegin() + 3,vec.rend() - 2, back_inserter(ls));

    //copy(beg, end, back_inserter(ls));

    for (auto a: ls) {
        cout << a << " ";
    }

    return 0;
}