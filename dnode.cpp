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
void dnode<T>::insert(dnode<T> *node, T val){
    dnode<T> *newNode = new dnode<T>(val);
    dnode<T> *after = node;
    while(after->next != 0){
        if(newNode)
    }
    
}

bool operator<(const dnode<int> &n1, const dnode<int> &n2){
    return (n1.data<n2.data);
}

#endif