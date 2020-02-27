#ifndef DNODE_H
#define DNODE_H

#include "file.h"
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
    void insert(dnode<T> *&head, T val);
};

bool operator<(const dnode<int>& n1, const dnode<int>& n2);
bool operator<(const dnode<File> &n1, const dnode<File> &n2);

#endif