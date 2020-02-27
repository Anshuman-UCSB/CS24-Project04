#include "word.h"


Word::Word(string wrd){
    val = wrd;
    head = 0;
}

void Word::insertCount(string filename){
    if (head == 0){
        head = new dnode<File>(File(filename, 1));
        return;
    }
    
    dnode<File>* p = head;
    for(;p;p=p->next){
        if(p->data.filename == filename){
            p->data.addCount();
            return;
        }
    }
    
    head->insert(head, File(filename,1));
}