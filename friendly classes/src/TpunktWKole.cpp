#include "TpunktWKole.h"
#include <iostream>
#include<string>
using namespace std;
Tkolo::Tkolo(float r)
{
   this->r=r;
}

float Tkolo::getr(){
    return r;
}

Tkolo::~Tkolo()
{
    //dtor
}

Tpunkt::Tpunkt(float x, float y){
    this->x=x;
    this->y=y;
}
void Tpunkt::ruch(float xPrzesuniecia, float yPrzesuniecia){
    x=x+xPrzesuniecia;
    y=y+yPrzesuniecia;
}
float Tpunkt::getx(){
    return x;
}
float Tpunkt::gety(){
    return y;
}
Tpunkt::~Tpunkt(){}

void Tpunkt::nalezy2(Tkolo *k){
    float xPrzesuniecia, yPrzesuniecia;
    cout<<"Wprowadz x przesuniecie ";
    cin>>xPrzesuniecia;
    cout<<"Wprowadz y przesuniecie ";
    cin>>yPrzesuniecia;
    ruch(xPrzesuniecia, yPrzesuniecia);
    float x1,y1, x_centr, y_centr, r_kola;
    cout<<"Wprowadz x, y, toczki, ktora chcesz sprawdzic "<<endl;
    cin>>x1>>y1;
    x_centr=getx();
    y_centr=gety();
    r_kola=k->getr();
    if ((((x1-x_centr)*(x1-x_centr))+((y1-y_centr)*(y1-y_centr)))==r_kola*r_kola) {
        cout<<"Toczka nalezy"<<endl;
    }
    else{
        cout<<"Nie nalezy"<<endl;
    }
}
