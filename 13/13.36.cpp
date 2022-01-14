//
// Created by ROG on 2021/11/22.
//

#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include "set"

using namespace std;

class Folder;

class Message {
    set<Folder *> Folders;

    void remFldr(Folder *f) {
        Folders.erase(f);
    };
};

class Folder {
    set<Message*> msgs;

    void addMsg(Message *m) {
        msgs.insert(m);
    }

    void remMsg(Message *m) {
        msgs.erase(m);
    }

    void Folder::add_to_Messages(const Folder &f) {
        for (auto msg: f.msgs) {
        }
    }

    Folder::Folder(const Folder &f) : msgs(f.msgs) {
        add_to_Messages(f);
    };

};

int main() {

    return 0;
}