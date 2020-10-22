#include"../include/USAtoVNDadapter.h"
#include"../include/USA.h"

USAtoVNDadapter::USAtoVNDadapter(const double &money) : USA(money)
{
    this -> money = money;
}
double USAtoVNDadapter::getMoney() const
{
    return money*20000;
}
USAtoVNDadapter::~USAtoVNDadapter()
{

}