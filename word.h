#ifndef WORD_H
#define WORD_H
#include "dnode.h"
#include "file.h"

class Word{
    public:
    dnode<File>* head;
    string val;

    Word(string wrd);
    void insertCount(string filename);

};

#endif