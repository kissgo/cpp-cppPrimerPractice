//
// Created by ROG on 2021/10/24.
//

#include <iostream>
#include "vector"
#include "string"
#include "algorithm"

using namespace std;



int main() {
    auto sum = [] (int a,int b) {
        return a + b;
    };

    cout << sum(1, 1);
    return 0;
}