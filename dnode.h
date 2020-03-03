#ifndef DNODE_H
#define DNODE_H
#include <iostream>
using namespace std;

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
    ~dnode(){
        dnode<T>* p = head;
        while(p->next!= 0){
            p = p->next;
            delete p->last;
        }
        delete p;
    }

    void insert(dnode<T> *&head, dnode<T> *node)
    {
        if (*node < *head)
        {
            cout <<"Inserted "<<node->data<<" at beginning"<<endl;
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
        if (!(*node <* end))
        {
            end->next = node;
            node->last = end;
            cout << "Inserted " << node->data << " at end" << endl;
            return;
        }
        //if node is at end

        dnode<T> *p = head;
        while (!(*node<*p))
        {
            p = p->next;
        }
        node->last = p->last;
        node->next = p;
        p->last->next = node;
        p->last = node;
        cout << "Inserted " << node->data << " at middle" << endl;

        //if node is in middle
    }
};

template<class T>
bool operator<(dnode<T> t1, dnode<T> t2);


#endif