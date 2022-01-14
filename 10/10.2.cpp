//
// Created by ROG on 2021/10/23.
//

#include <iostream>
#include "vector"
#include "string"
#include "algorithm"

using namespace std;

int main() {
    vector<string> vec = {"1", "1", "1", "1", "2", "3", "4"};
    cout << count(vec.begin(), vec.end(), "1");
    return 0;
}