#include "word.h"
#include <iostream>
using namespace std;

Word::Word(string wrd){
    val = wrd;
    head = 0;
}

Word::Word(){
    val = "";
    head = 0;
}

void Word::insertCount(string filename){
    if (head == 0){
        File f = File(filename, 1);
        head = new dnode<File>(f);
        return;
    }
    
    dnode<File>* p = head;
    for(;p;p=p->next){
        if(p->data.filename == filename){
            p->data.addCount();
            return;
        }
    }

    File f = File(filename, 1);
    head->insert(head, new dnode<File>(f));
}

bool operator<(Word w1, Word w2){
    return(w1.val.compare(w2.val)<0);
}