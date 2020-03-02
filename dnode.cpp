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

