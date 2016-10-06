#ifndef KWADRAT_H
#define KWADRAT_H
#include "Figura.h"

class Kwadrat : public Figura
{
    public:
        Kwadrat(float x=2);
        virtual ~Kwadrat();
        void obliczPole();
    protected:
    private:
        float a;
};

#endif // KWADRAT_H
