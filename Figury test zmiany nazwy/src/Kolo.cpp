#include "Kolo.h"
#include <math.h>
#include <iostream>

Kolo::Kolo(float x=3)
{
    r=x;
}

Kolo::~Kolo()
{
    //dtor
}
void Kolo::obliczPole(){
    std::cout << "Pole kola: " << M_PI*r*r;
}
