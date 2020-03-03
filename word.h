#ifndef WORD_H
#define WORD_H
#include "dnode.h"
#include "file.h"

class Word{
    public:
    dnode<File>* head;
    string val;

    Word(string wrd);
    Word();

    void insertCount(string filename);

};

bool operator<(Word w1, Word w2);

#endif