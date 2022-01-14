//
// Created by ROG on 2021/10/23.
//

#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include "functional"

using namespace std;

bool fun(string &s,string::size_type sz ){
    return s.size() >= sz;
};

int main() {
    vector<string> vec = {"aaaaaa", "bbbbbb", "c", "dd", "eeeeeee"};
    int a = 2;


    auto cnt = count_if(vec.begin(), vec.end(), bind(fun,placeholders::_1,a));

    cout << cnt;

    return 0;
}