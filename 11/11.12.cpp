//
// Created by ROG on 2021/10/28.
//

#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include "utility"


using namespace std;

int main() {
    vector<pair<string, int>> vec;
    string s;
    int i;

    while (cin >> s && cin >> i) {
        //vec.push_back(make_pair(s, i));
        vec.push_back({s, i});
    }

    for (auto &a: vec) {
        cout << a.first << " " << a.second << endl;
    }

    return 0;
}