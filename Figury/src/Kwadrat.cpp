#include "Kwadrat.h"
#include <iostream>
Kwadrat::Kwadrat(float x)
{
    a=x;
}

Kwadrat::~Kwadrat()
{
    //dtor
}

void Kwadrat::obliczPole(){
    std::cout << "Pole kwadratu: " << a*a;
}
