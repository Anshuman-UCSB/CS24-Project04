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

};



#endif