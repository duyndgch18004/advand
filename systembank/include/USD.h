#pragma once
#include<iostream>
#include<string>

class USD
{
private:
    double money;
public:
    USD(const double &money);
    void setMoney() const;
    double getMoney() const;
    ~USD();
};



