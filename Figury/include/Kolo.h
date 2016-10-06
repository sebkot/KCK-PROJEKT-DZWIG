#ifndef KOLO_H
#define KOLO_H
#include "Figura.h"


class Kolo: public Figura
{
    public:
        void obliczPole();
        Kolo(float x);
        virtual ~Kolo();
    protected:
    private:
        float r;
};

#endif // KOLO_H
