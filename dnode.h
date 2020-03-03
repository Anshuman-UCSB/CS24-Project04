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
bool operator<(dnode<T> t1, dnode<T> t2){
    return t1.data<t2.data;
}

template<class T>
void dnode<T>::insert(dnode<T> *&head, dnode<T> *node)
{
    if (*node < *head)
    {
        head->last = node;
        node->next = head;
        head = head->last;
        return;
    }
    //if node is at beginning

    dnode<T> *end = head;
    while (end->next != 0)
    {
        end = end->next;
    }
    if (!(*node < *end))
    {
        end->next = node;
        node->last = end;
        return;
    }
    //if node is at end

    dnode<T> *p = head;
    while (!(*node < *p))
    {
        p = p->next;
    }
    node->last = p->last;
    node->next = p;
    p->last->next = node;
    p->last = node;

    //if node is in middle
}


#endif