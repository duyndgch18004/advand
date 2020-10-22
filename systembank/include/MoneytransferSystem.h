#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"VND.h"
using namespace std;

class MoneytransferSystem
{
private:
    vector<VND*> usa;
    vector<VND*> usd;
public:
    void run();
    void USDtransfer()const;
    void USAtransfer()const;
     ~MoneytransferSystem();
private:
    int getChoice() const;
    void printMenu()const;
    void doTask(const int &choice);
};

