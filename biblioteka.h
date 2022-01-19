#ifndef KNJIGA_BIBLIOTEKA_BIBLIOTEKA_H
#define KNJIGA_BIBLIOTEKA_BIBLIOTEKA_H
#include "knjiga.h"

class Library {
string name;
int br,maxKnjiga;
static int brojac;
struct Elem{
    Book* k;
    Elem* sled;
    Elem(Book* k1, Elem *sl=nullptr): k(k1), sled(sl){}
};
Elem *first=nullptr;
public:
    Library(string naziv, int maxK): name(naziv), maxKnjiga(maxK){ br=0;}

    ~Library(){
        Elem *pre =first;
        while(first){
            pre=first;first=first->sled;
            delete pre;
        }
    }

    const string &getNaziv() const;

    int getBr() const;

    int getMaxKnjiga() const;

    Book *dohvKnjigu(int id){
        for(Elem *tek=first; tek; tek=tek->sled){
            if(tek->k->getId()==id){
                return tek->k;
            }
        }
        return nullptr;
    }

    void operator +=(const Book &k);

    friend ostream& operator<<(ostream& it, Library *b);
};
#endif //KNJIGA_BIBLIOTEKA_BIBLIOTEKA_H
