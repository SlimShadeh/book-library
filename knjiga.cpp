#include "knjiga.h"

int:: Book::brojac=0;

int Book::getId() const {
    return id;
}

const string &Book::getIme() const {
    return name;
}

const string &Book::getAutor() const {
    return author;
}

ostream &operator<<(ostream &it, const Book &k) {
    return it << "KNJIGA" << k.id << " : " << k.name << " - " << k.author << "\n";
}

Book *Book::operator!() const {
    Book *k=new Book(name, author);
    k->setId(id);
    return k;
}

void Book::setId(int id) {
    Book::id = id + 1;
}

