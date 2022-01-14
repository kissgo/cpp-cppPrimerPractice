//
// Created by ROG on 2021/10/27.
//

#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include "list"

using namespace std;

int main() {
    list<int> ls = {1, 2, 6, 0, 3, 0, 2, 0, 1};

    auto last = find(ls.rbegin(), ls.rend(), 0);

    last++;//原本指向0 现在是2 last.base()之后就指回0
    int cnt = 1;

    for (auto i = ls.begin(); i != last.base() ; i++, cnt++) {}
    cout << "last 0 in " << cnt;
    return 0;
}