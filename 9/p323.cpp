//
// Created by ROG on 2021/10/22.
//

#include <iostream>
#include "vector"
#include "string"

using namespace std;

int main() {
    const char * cp = "12345,6789";
    string  s;
    s.assign(cp, 7);
    cout << s << endl;
    s.insert(s.size(), cp + 1);
    cout << s;

    return 0;
}