//
// Created by ROG on 2021/10/9.
//

#include <iostream>
#include "fstream"
#include "vector"
#include "string"

using namespace std;



int main() {
    vector<string> vec ;

    ifstream in("../8/123.txt");
    if (!in.is_open()) {
        cerr << "can not open file " << endl;
    }
    string s;
    while (getline(in, s)) {
        vec.push_back(s);
    }
    in.close();

    for (auto a: vec) {
        cout << a << endl;
    }



    return 0;
}