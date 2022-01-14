//
// Created by ROG on 2021/10/23.
//

#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include "numeric"

using namespace std;


int main() {
    int cnt = 0;
    vector<int> vec = {1, 1, 1, 1, 2, 3, 4};

    cout << accumulate(vec.begin(), vec.end(), 0);
    return 0;
}