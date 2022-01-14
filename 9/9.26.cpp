//
// Created by ROG on 2021/10/14.
//

#include <iostream>
#include "vector"
#include "string"
#include "list"

using namespace std;

int main() {
    int ia[]={0,1,1,2,3,5,8,13,21,55,89};
    vector<int> v;
    list<int> l;
    v.assign(ia, ia + 11);
    l.assign(ia, ia + 11);

    auto bv = v.begin();
    while (bv!=v.end()) {
        if (*bv % 2 == 0) {
            bv = v.erase(bv);
        }
        else {
            bv++;
        }
    }

    for (auto a: v) {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}