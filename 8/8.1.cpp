//
// Created by ROG on 2021/10/8.
//

#include <iostream>
#include "vector"
#include "string"
#include "sstream"


using namespace std;

istream & f (istream & in){
    int v;
    while(in >> v , !in.eof()) {
        if (in.fail()) {
            cerr << "fail" << endl;
            in.clear();
            continue;
        }
        cout << v << endl;
    }
    in.clear();
    return in;
}


int main (){

    f(cin);






    return 0 ;
}