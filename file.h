#ifndef FILE_H
#define FILE_H
#include "dnode.h"
#include <string>
#include <cstring>

class File{
    public:
    string filename;
    int count;

    File(string name, int count);
    File();
    void addCount();
    bool hasMoreThan(int cnt) const;
};

bool operator<(const File& f1, const File& f2);


#endif