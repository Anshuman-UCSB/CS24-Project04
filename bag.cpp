#include "bag.h"

Bag::Bag(){
    head = 0;
}

void Bag::addWord(string word, string filename){
    if(head == 0){
        head = new dnode<Word>(word);
        return;
    }

    for(dnode<Word>* p = head;p;p=p->next){
        if(p->data.val == word){
            p->data.insertCount(filename);
            return;
        }
    }

    head->insert(head,new dnode<Word>(word));
}