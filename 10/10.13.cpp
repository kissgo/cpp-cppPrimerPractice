//
// Created by ROG on 2021/10/23.
//

#include <iostream>
#include "vector"
#include "string"
#include "algorithm"

using namespace std;

bool fun( string &s){
    return s.size()>=5;
};

int main() {
    vector<string> vec = {"aaaaa", "bbbbb", "c", "dd", "eeeeee"};

    auto i = partition(vec.begin(), vec.end(), fun);

    for (auto beg = vec.begin(); beg != i; ++beg) {

        cout << *beg << " ";
    }

    return 0;
}