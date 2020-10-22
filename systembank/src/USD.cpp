#include"../include/USD.h"

USD::USD(const double &money)
{
    this->money =money;
}

double USD::getMoney() const
{
    return money;
}

USD::~USD()
{
    
}