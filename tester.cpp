#include "dnode.h"
#include <iostream>
using namespace std;

void printList(dnode<int> *head){
    for(dnode<int>* n = head; n; n= n->next){
        cout<<"("<<n->data<<") -> ";
    }
    cout<<endl;
}

int main(){
    dnode<int> * head = new dnode<int>(4);
    printList(head);
    head->insert(head, new dnode<int>(5));
    printList(head);
    head->insert(head, new dnode<int>(5));
    printList(head);
    head->insert(head, new dnode<int>(6));
    printList(head);

    cout <<"Successful"<<endl;
}