//
// Created by ROG on 2021/10/9.
//

#include <iostream>
#include "fstream"
#include "vector"
#include "string"
#include "sstream"


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

    for (auto &a: vec) {
        cout << a << endl;
    }

    for (auto &a: vec) {
        istringstream is(a);
        string i ;
        while (is >> i) {
            cout << i << endl;
        }
    }



    return 0;
}