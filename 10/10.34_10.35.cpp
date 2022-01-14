//
// Created by ROG on 2021/10/27.
//

#include <iostream>
#include "vector"
#include "string"
#include "algorithm"

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto i = vec.rbegin(); i != vec.rend(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    for (auto i = vec.end(); i != vec.begin();) {

        cout << *(--i) << " ";
    }
    cout << endl;



    return 0;
}