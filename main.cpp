#include <iostream>
#include "biblioteka.h"

int main() {
    Book k("Za kim zvona zvone", "Hemingvej");
    Book k1("Neki novi klinci", "Balasevic");
    Book k3("Post Office", "Bukowski");
    Book k4("Na Drini cuprija", "Ivo Andric");
    cout << k;
    string ime;
    ime=k.getAutor();
    cout << ime << endl;
    Book *k2=!k;
    //cout << *k2;
    Library b("Konzervarijum", 5);
    b+=k;
    b+=k1;
    b+=k3;
    b+=k4;
    cout << *b.dohvKnjigu(3)<<endl;
    //b+={"Macak u cizmama","neki tamo"};
    //b+={"prvaK","dzeki"};
    //cout <<"ala"<< b.getNaziv() <<endl<< b.getBr()<<endl<< b.getMaxKnjiga()<<endl;
    cout << &b;
    return 0;
}
