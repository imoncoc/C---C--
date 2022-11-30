#include<bits/stdc++.h>
using namespace std;

void showMenu(){
    cout<<endl<<"*********Menu*********"<<endl;
    cout<<"1. Promt"<<endl;
    cout<<"2. Make a call"<<endl;
    cout<<"3. See Value"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"**********************"<<endl;
}

int main(){
    //Check balance, deposite, withdraw, show menu
    int option;
    double balance = 500;
    vector<double> arr(13);

    do{
        showMenu();
        cout<<"option: ";
        cin>>option;
        system("cls");
        switch(option){
            case 1: cout<<"Please enter 13 copper wires value : ";
            for(int i = 0; i < 13; i++ ){
                cin>>arr[i];
                if(arr[i] < 1){
                    cout<<"Please enter Positive value: ";
                    i--;
                }
            }
            break;

            case 2: cout<<"Deposite amount:";
            double depositeAmount;
            cin>>depositeAmount;
            balance += depositeAmount;
            break;

            case 3: cout<<"Your array value: ";
            for(int i = 0; i < 13; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        }
        } while(option != 4);

    return 0;
}

