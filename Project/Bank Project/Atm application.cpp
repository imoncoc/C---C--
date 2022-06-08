#include<iostream>
using namespace std;

void showMenu(){
    cout<<endl<<"*********Menu*********"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposite"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"**********************"<<endl;
}

int main(){
    //Check balance, deposite, withdraw, show menu
    int option;
    double balance = 500;

    do{
        showMenu();
        cout<<"option: ";
        cin>>option;
        system("cls");
        switch(option){
            case 1: cout<<"Balance is: "<<balance<<" $ "<<endl;
            break;

            case 2: cout<<"Deposite amount:";
            double depositeAmount;
            cin>>depositeAmount;
            balance += depositeAmount;
            break;

            case 3: cout<<"WithdrawAmount:";
            double withDrawAmount;
            cin>>withDrawAmount;
            if(withDrawAmount <= balance){
                balance -= withDrawAmount;
            }else{
                cout<<"not enough money"<<endl;
            }
            break;
        }
        } while(option != 4);

    return 0;
}
