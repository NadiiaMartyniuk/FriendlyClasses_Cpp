#include "Tdom.h"
#include <iostream>

using namespace std;

int Tdomownik::kod=4765;

Tdomownik::Tdomownik()
{
    nazwa="IMIE DOMOWNIKA";
    sekret="SEKRET";
}

Tdomownik::~Tdomownik() {}

Tdomownik::Tdomownik(string nazwa, string sekret){
    this->nazwa=nazwa;
    this->sekret=sekret;
}
void Tdomownik::setkod(){
    cout<<"Ustaw kod ";
    cin>>kod;
}
int Tdomownik::getkod(){
    return kod;
}
void Tdomownik::wyswietl(){
    cout<<"Nazwa domownika: "<<nazwa<<endl;
    cout<<"Sekret: "<<sekret<<endl;
}

// KLASY TSASIAD

Tsasiad::Tsasiad(){
    nazwa="IMIE SASIADA";
}

Tsasiad::Tsasiad(string nazwa){
    this->nazwa=nazwa;
}

void Tsasiad::info(Tdomownik *wsk){
    cout<<"Ja sasiad "<<nazwa<<" Znam sekret domownika "<<wsk->nazwa<<":"<<wsk->sekret<<" i kod do ich domu "<<wsk->kod<<endl;
}

Tsasiad::~Tsasiad(){}
