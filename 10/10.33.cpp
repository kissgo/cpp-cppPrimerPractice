//
// Created by ROG on 2021/10/27.
//

#include <iostream>
#include <fstream>
#include "vector"
#include "string"
#include "algorithm"

using namespace std;

void input(const string &s1,const string &s2,const string &s3) {
    ifstream in(s1);
    ofstream out1(s2);
    ofstream out2(s3);
    istream_iterator<int> in_iter(in);
    istream_iterator<int> eof;
    ostream_iterator<int> out_iter1(out1," ");
    ostream_iterator<int> out_iter2(out2, "\n");

    while (in_iter != eof) {
        if (*in_iter % 2 == 0) {
            out_iter1 = *in_iter;
        }
        else {
            out_iter2 = *in_iter;
        }
        in_iter++;
    }
}

int main() {
    input("../10/in.txt", "../10/jishu.txt", "../10/oushu.txt");
    return 0;
}