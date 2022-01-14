//
// Created by ROG on 2021/10/27.
//

#include <iostream>
#include "vector"
#include "string"
#include "list"
#include "algorithm"

using namespace std;

int main() {
    vector<int> vec={1,1,2,3,4,5,5,6,6};
    list<int> list;
    unique_copy(vec.begin(), vec.end(), inserter(list, list.begin()));

    for (auto a: list) {
        cout << a << " ";
    }
    return 0;
}