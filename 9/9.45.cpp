//
// Created by ROG on 2021/10/22.
//

#include <iostream>
#include "vector"
#include "string"

using namespace std;

void fun(string &name,const string &a,const string &b){
    name.insert(name.begin(), 1, ' ');
    name.insert(name.begin(), a.begin(), a.end());
    name.append(" ");
    name.append(b);
};

int main() {
    string a = "hello";
    string b = "mr";
    string c = "Jr.";

    fun(a, "ms", c);
    cout << a;
    return 0;
}