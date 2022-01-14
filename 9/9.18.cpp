//
// Created by ROG on 2021/10/13.
//

#include <iostream>
#include "vector"
#include "string"
#include "deque"

using namespace std;

int main() {
    string s;
    deque<string> de;
    while (cin >> s) {
        de.push_back(s);

    }
    auto b = de.begin();
    auto e = de.end();
    while (b != e) {
        cout << *b << endl;
        b++;
    }

    return 0;
}