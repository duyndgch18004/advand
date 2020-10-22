#pragma once
#include<iostream>
#include<string>
#include "USD.h"

class USDtoVNDadapter : public USD

{
private:
    double money;
public:
    USDtoVNDadapter(const double &money);
    double getMoney() const;
    ~USDtoVNDadapter();
};

