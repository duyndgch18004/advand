#include"../include/USA.h"

USA::USA(const double &money)
{
    this->money = money;
}

double USA::getMoney() const
{
    return money;
}

USA::~USA()
{

}