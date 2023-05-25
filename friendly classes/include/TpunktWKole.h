#ifndef TPUNKTWKOLE_H
#define TPUNKTWKOLE_H
#include <iostream>
#include<string>
using namespace std;
class Tpunkt;
class Tkolo
{
    public:
        Tkolo(float r);
        float getr();
        virtual ~Tkolo();
        friend void nalezy(Tpunkt *, Tkolo *);
    protected:

    private:
        float r;
};

class Tpunkt
{
    public:
        Tpunkt(float x, float y);
        void ruch(float xPrzesuniecia, float yPrzesuniecia);
        float getx();
        float gety();
        friend void nalezy(Tpunkt *, Tkolo *);
        void nalezy2(Tkolo *k);
        virtual ~Tpunkt();

    protected:

    private:
        float x, y;
};

#endif // TPUNKTWKOLE_H
