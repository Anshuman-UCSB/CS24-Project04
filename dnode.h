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
    void insert(dnode<T> node, T val);
};

bool operator<(const dnode<int>& n1, const dnode<int>& n2);