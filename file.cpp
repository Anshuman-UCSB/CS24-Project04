#include "file.h"

File::File(string name, int count){
    filename = name;
    this->count = count;
}

void File::addCount(){
    count++;
}

bool File::hasMoreThan(int cnt) const {
    return count>=cnt;
}
