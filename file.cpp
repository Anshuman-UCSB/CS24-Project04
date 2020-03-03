#include "file.h"

File::File(string name, int count){
    filename = name;
    this->count = count;
}

void File::addCount(){
    count++;
}

File::File(){
    filename = "";
    count = -1;
}

bool File::hasMoreThan(int cnt) const {
    return count>=cnt;
}

bool operator<(const File& f1, const File& f2){
    return(f1.filename.compare(f2.filename) < 0);
}
