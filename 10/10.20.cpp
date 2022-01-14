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
    vector<string> vec = {"aaaaaa", "bbbbbb", "c", "dd", "eeeeeee"};
    int a = 2;
    auto cnt = count_if(vec.begin(),vec.end(),[a](string &s){ return s.size() >= a; });

    cout << cnt;

    return 0;
}