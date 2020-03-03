#ifndef DNODE_H
#define DNODE_H


template <class T>
class dnode
{
public:
    T data;
    // forward pointer
    dnode<T> *next;
    // backward pointer
    dnode<T> *last;
    // TODO:add member functions
    dnode(T d, dnode<T> *n, dnode<T> *l);
    dnode(T d);


    void insert(dnode<T> *&head, dnode<T> *node);
    
};

template<class T>
bool operator<(dnode<T> t1, dnode<T> t2);

#include "dnode.cpp"

#endif