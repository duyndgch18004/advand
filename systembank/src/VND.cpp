#include<iostream>
#include<string>
#include"VND.h"


VND::VND(const double &money)
{
    this->money = money;
}

void VND::show() const
{
    cout << "VND = " << money <<endl;
}
VND::~VND()
{
}
