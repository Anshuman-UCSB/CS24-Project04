template <class T>
class dnode
{
private:
    T data;
    // forward pointer
    dnode<T> *next;
    // backward pointer
    dnode<T> *last;

public:
    // TODO:add member functions
    dnode(T d, dnode<T> *n, dnode<T> *l);
};