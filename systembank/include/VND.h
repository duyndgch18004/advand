#pragma once
#include<iostream>
#include<string>
#include"MoneytransferSystem.h"

class VND
{
private:
    double money;
public:
    VND(const double &money);
    void show() const;
    double getMoney() const;
    ~VND();
};




