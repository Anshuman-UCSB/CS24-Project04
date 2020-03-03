#include "bag.h"
#include <iostream>
using namespace std;

Bag::Bag(){
    head = 0;
}

void Bag::printThreshold(string word, int thresh){
    for(dnode<Word>* p = head;p;p->next){
        if (p->data.val == word){
            for(dnode<File>* i = p->data.head;i;i=i->next){
                if(i->data.hasMoreThan(thresh)){
                    cout<<i->data.filename<<endl;
                }
            }

            return;
        }
    }
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