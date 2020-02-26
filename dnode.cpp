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



#endif