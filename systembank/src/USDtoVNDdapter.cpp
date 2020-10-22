#include"../include/USDtoVNDadapter.h"
#include"../include/USD.h"

USDtoVNDadapter::USDtoVNDadapter(const double &money) : USD(money)
{
    this -> money = money;
}
double USDtoVNDadapter::getMoney() const
{
    return money*23000;
}
USDtoVNDadapter::~USDtoVNDadapter()
{

}