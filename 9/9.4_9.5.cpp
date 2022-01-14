//
// Created by ROG on 2021/10/10.
//

#include <iostream>
#include "vector"
#include "string"

using namespace std;

//9.4
//bool search(vector<int>::iterator beg, vector<int>::iterator end, int i) {
//    while (beg != end) {
//        if (*beg == i) {
//            return true;
//        }
//        ++beg;
//    }
//    return false;
//}


//9.5
vector<int>::iterator search(vector<int>::iterator beg, vector<int>::iterator end, int i) {
    while (beg != end) {
        if (*beg == i) {
            return beg;
        }
        ++beg;
    }
    return end;
}


int main() {
    vector<int> vec{1, 2, 3, 4, 5, 6, 7};
    cout << search(vec.begin(), vec.end(), 4) -vec.begin()<< endl;
    cout << search(vec.begin(), vec.end(), 8) -vec.begin()<< endl;

    return 0;
}