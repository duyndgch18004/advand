#include "../include/MoneytransferSystem.h"
#include "../include/USAtoVNDadapter.h "
#include"../include/USDtoVNDadapter.h"



void MoneytransferSystem::run()
{
    bool running = true;
    while(running)
    {
        printMenu();
        int choice;
        choice = getChoice();
        doTask(choice);
        if (choice == 0) running = false;
    }
}


void MoneytransferSystem::printMenu()const
{
    cout<<"|----Money transfer System----|"<<endl;
    cout<<"|(1) USA to VND               |"<<endl;
    cout<<"|(2) USD to VND               |"<<endl;
    cout<<"|(0) Exit                     |"<<endl;
    cout<<"|-----------------------------|"<<endl;
}

int MoneytransferSystem::getChoice() const
{
    int choice;
    cout<<"Your choice: ?" ;
    cin>>choice;
    return choice;
}

void MoneytransferSystem::doTask(const int &choice)
{
    switch (choice)
    {
    case 1:
        USAtransfer();
        break;
    case 2:
        USDtransfer();
        break;
    case 0: 
        cout<<"Exit"<<endl;
        break;
    default:
        cout << "invalid choice!";
        break;
    }
}

void MoneytransferSystem::USAtransfer() const
{
    double money;
    cout <<"Insert money USA: " << endl;
    cin >> money;
    USAtoVNDadapter *m = new USAtoVNDadapter(money);
    usa.push_back(m);

    

}

void MoneytransferSystem::USDtransfer() const
{
    double money;
    cout <<"Insert money: " << endl;
    cin >> money;
    USDtoVNDadapter*m = new USDtoVNDadapter(money);
    usd.push_back(m); 
}




