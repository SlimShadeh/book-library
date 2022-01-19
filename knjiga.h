#ifndef KNJIGA_BIBLIOTEKA_KNJIGA_H
#define KNJIGA_BIBLIOTEKA_KNJIGA_H
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int id;
    string name,author;
    static int brojac;
public:
    Book(string ime, string autor): name(ime), author(autor){
        id=brojac;
        brojac++;
    }

    Book (const Book &k)=delete;

    void setId(int id);

    int getId() const;

    const string &getIme() const;

    const string &getAutor() const;

    friend ostream& operator<<(ostream& it,const Book &k);

    Book *operator !() const;

};
#endif //KNJIGA_BIBLIOTEKA_KNJIGA_H
