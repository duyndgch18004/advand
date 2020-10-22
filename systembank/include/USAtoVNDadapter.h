#pragma once
#include<iostream>
#include<string>
#include "USA.h"


class USAtoVNDadapter : public USA
{
private:
    double money;
public:
    USAtoVNDadapter(const double &money);
    double getMoney() const;
    ~USAtoVNDadapter();
};

