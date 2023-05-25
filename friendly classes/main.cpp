#include <iostream>
using namespace std;
#include "Tdom.h"
#include "TpunktWKole.h"
#include<string>


void sasiad(Tdomownik *wsk){
    Tdomownik::setkod();
    cout<<"Sekret domownika "<<wsk->sekret<<endl;
}

void nalezy(Tpunkt *p, Tkolo *k){
    float xPrzesuniecia, yPrzesuniecia;
    cout<<"Wprowadz x przesuniecie ";
    cin>>xPrzesuniecia;
    cout<<"Wprowadz y przesuniecie ";
    cin>>yPrzesuniecia;
    p->Tpunkt::ruch(xPrzesuniecia, yPrzesuniecia);
    float x1,y1;
    cout<<"Wprowadz x, y, toczki, ktora chcesz sprawdzic "<<endl;
    cin>>x1>>y1;
    if ((((x1-p->x)*(x1-p->x))+((y1-p->y)*(y1-p->y)))==k->r*k->r) {
        cout<<"Toczka nalezy"<<endl;
    }
    else{
        cout<<"Nie nalezy"<<endl;
    }
}

int main()
{
    int zadanie;
    cout<<"Zadanie 1. Domownik - sasiad "<<endl;
    cout<<"Zadanie 2. Punkt w kole - przyjazn z funkcja "<<endl;
    cout<<"Wybierz zadanie "<<endl;
    cin>>zadanie;
    switch (zadanie){
    case 1:{
        Tdomownik ojciec;
        Tdomownik matka;
        Tdomownik corka;
        Tsasiad sasiad1;
        sasiad1.info(&ojciec);
        sasiad(&ojciec);
        sasiad1.info(&matka);
        sasiad(&matka);
        sasiad1.info(&corka);
        sasiad(&corka);
        break;}
    case 2:{
        Tpunkt p(3,2);
        Tkolo k(15);
        nalezy(&p, &k);

        cout<<endl<<"Sprawdzamy druga metoda "<<endl;
        Tpunkt p2(7,4);
        Tkolo k2(23);
        p2.nalezy2(&k2);
        break;}
    default:
        cout<<"Nie ma takiej opcji"<<endl;
        break;
    }

    return 0;
}

