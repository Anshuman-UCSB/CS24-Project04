#ifndef BAG_H
#define BAG_H

#include "dnode.cpp"
#include "word.h"

class Bag{
    public:
    dnode<Word>* head;
    Bag();
    ~Bag(){
        delete head;
    }
    void addWord(string word, string filename);
};



#endif