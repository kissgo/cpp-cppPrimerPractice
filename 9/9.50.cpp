//
// Created by ROG on 2021/10/23.
//

#include <iostream>
#include "vector"
#include "string"

using namespace std;


int main() {
    vector<string> vec = {"1", "2", "3", "4"};
    int total = 0;
    for (const auto& a: vec) {
        total+= stoi(a);
    }
    cout << total << endl;
    return 0;
}