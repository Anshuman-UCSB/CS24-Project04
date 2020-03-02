#include "dnode.cpp"
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
    head->insert(head, new dnode<int>(2));
    printList(head);
    head->insert(head, new dnode<int>(3));
    printList(head);

    cout <<"Successful"<<endl;
}