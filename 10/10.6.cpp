//
// Created by ROG on 2021/10/23.
//

#include <iostream>
#include "vector"
#include "string"
#include "algorithm"

using namespace std;

int main() {
    vector<int> vec;

    fill_n(back_inserter(vec), 10, 0);
    for (auto &a: vec) {
        cout << a;
    }
    return 0;
}