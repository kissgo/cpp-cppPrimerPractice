//
// Created by ROG on 2021/9/23.
//

#include <iostream>
#include "vector"
#include "string"

using namespace std;

class Person {

    friend istream &read(istream &is, Person &p);
    friend ostream &print(ostream &os, Person &p);

    private:
        string name;
        string addr;

    public:
        Person() = default;
        Person(const string &name, const string &addr) : name(name), addr(addr) {}
        Person(istream &is) { read(is, *this); }

        const string &getName() const {
            return name;
        }

        string const &getAddr() const {
            return addr;
        }

};

    istream &read(istream &is, Person &p) {
        is >> p.name >> p.addr;
        return is;
    }

    ostream &print(ostream &os, Person &p) {
        os << p.name << " " << p.addr;
        return os;
    }

    int hanshu(int a, int b) { return a + b; }

int main() {
    vector<decltype(hanshu) *> vec;
    vec.push_back(hanshu);

    cout << vec[0](1, 2);
    return 0;
}