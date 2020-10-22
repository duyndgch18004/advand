#pragma once
#include<iostream>
#include<string>
using namespace std;

class USA
{
private:
    double money;
public:
    USA(const double &money);
    double getMoney() const;
    ~USA();
};


