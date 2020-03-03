#ifndef BAG_H
#define BAG_H

#include "dnode.h"
#include "word.h"

class Bag{
    public:
    dnode<Word>* head;
    Bag();
    void addWord(string word, string filename);
    void printThreshold(string word, int thresh);
    void printUnion(string w1, string w2);
};



#endif