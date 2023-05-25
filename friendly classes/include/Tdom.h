#ifndef TDOM_H
#define TDOM_H
#include <iostream>
#include<string>

using namespace std;
class Tsasiad;
class Tdomownik
{
    public:
        Tdomownik();
        friend Tsasiad;
        Tdomownik(string nazwa, string sekret);
        virtual ~Tdomownik();
        static void setkod();
        static int getkod();
        void wyswietl();
        friend void sasiad(Tdomownik *wsk);

    protected:
        string nazwa, sekret;
        static int kod;

    private:
};

class Tsasiad
{
    public:

        Tsasiad();
        Tsasiad(string nazwa);
        void info(Tdomownik *wsk);
        virtual ~Tsasiad();

    protected:
        string nazwa;


    private:
};

#endif // TDOM_H
