#include "biblioteka.h"



const string &Library::getNaziv() const {
    return name;
}

int Library::getBr() const {
    return br;
}

int Library::getMaxKnjiga() const {
    return maxKnjiga;
}

void Library::operator+=(const Book &k) {
    if(br>=maxKnjiga) return;
    br++;
    Book *k1=!k;
    //cout << *k1;
    first=new Elem(k1, first);

    //first=new Elem(k,first);
    /*
    Elem *nov=new Elem(k1,nullptr);
    Elem *tek=first=nullptr;
    if(first==nullptr) {
        first = nov;
    }
    else{
        while(tek){
            tek=tek->sled;
        }
        tek->sled=nov;
    }
*/

}

ostream &operator<<(ostream &it, Library *b) {
    it << "BIBLIOTEKA " << b->name << " " << b->br << "/" << b->maxKnjiga << endl;
    while(b->first){
        //cout << "ovde";
        cout << *b->first->k;
        b->first=b->first->sled;
    }
}
/*
ostream &Library::operator<<(ostream &it,const Library &b) {
    it << "BIBLIOTEKA " << name<< " " << br << "/" << maxKnjiga<< endl;
    for(Elem *tek=first;tek;tek=tek->sled){
        it<< tek->k;
    }
}
*/

