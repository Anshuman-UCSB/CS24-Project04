#ifndef DNODE_CPP
#define DNODE_CPP

#include "dnode.h"

using namespace std;

template <class T>
dnode<T>::dnode(T d, dnode<T> *n, dnode<T> *l){
    next = n;
    last = l;
    data = d;
}

template <class T>
dnode<T>::dnode(T d)
{
    next = 0;
    last = 0;
    data = d;
}

template <class T>
void dnode<T>::insert(dnode<T> *&head, T val){
    dnode<T> *newNode = new dnode<T>(val);
    dnode<T> *before = node;
    if(newNode<before){
        newNode->next = node;
        node->last = newNode;
        node = node->last;
    }
    while(before->next != 0){
        if(newNode<before){
            newNode->last = before->last;
            newNode->next = before;
            before->last->next = newNode;
            before->last = newNode;
            return;
        }
        before = before->next;
    }
    before->next = newNode;
    newNode->last = before;
    
}

bool operator<(const dnode<int> &n1, const dnode<int> &n2){
    return (n1.data<n2.data);
}
bool operator<(const dnode<File> &n1, const dnode<File> &n2)
{
    return (n1.data.filename.compare(n2.data.filename)<0);
}

#endif