#ifndef FILE_H
#define FILE_H
#include "dnode.h"
#include <string>
#include <cstring>
using namespace std;

class File{
    public:
    string filename;
    int count;

    File(string name, int count);
    void addCount();
    bool hasMoreThan(int cnt) const;
};

bool operator<(const File& f1, const File& f2){
    return(f1.filename.compare(f2.filename) < 0);
}

void operator++(File & file){
    file.addCount();
}

#endif