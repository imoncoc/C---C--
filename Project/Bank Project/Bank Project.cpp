#include<iostream>
#include<string>
#include<ios>
using namespace std;

string userID = "12", userPassword = "12345";

void showMenu(){
    cout<<"Hi! Welcome to Mr. Zamar’s ATM Machine!"<<endl<<endl;
    cout<<"Please select an option from the menu below:"<<endl;
    cout<<"1. Login"<<endl;
    cout<<"2. Create New Account"<<endl;
}

void login(){
    string USERID, USERPASSWORD;
    //cin>>USERID;
    cout<<"Please enter your user id: ";
    //cin.ignore();
    cin.sync();
    getline(cin, USERID);

    if(userID == USERID){
            cout<<"Please enter your user name: ";
            getline(cin, USERPASSWORD);
            //cin.ignore();
            cin.sync();
            if(USERPASSWORD == userPassword){
                cout<<"Access Granted!"<<endl;
            }else{
                cout<<endl<<"******** LOGIN FAILED! ********"<<endl;
                login();
            }

    }else{
        cout<<endl<<"Please enter Correct userID!"<<endl;
        login();
    }
}

void createAccount(){
    cout<<"Please enter your user name: ";
    cin>>userID;
    cout<<"Please enter your password: ";
    cin>>userPassword;
    cout<<"Thank You! Your account has been created!"<<endl;
    cout<<"Login Now!"<<endl<<endl;
    login();

}

void MenuBar(){
    cout<<endl<<"*********Menu*********"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposite Money"<<endl;
    cout<<"3. Withdraw Money"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"**********************"<<endl;
}

int main(){
    int num, option;
    double balance = 500;
    showMenu();
    cout<<"Choise option: ";
    cin>>num;

    switch(num){
        case 1: login();
        break;
        case 2: createAccount();
        break;
    }

    system("cls");


    do{
        MenuBar();
        cout<<"option: ";
        cin>>option;
        system("cls");
        switch(option){
            case 1: cout<<"Balance is: "<<balance<<" $ "<<endl;
            break;

            case 2: cout<<"Deposite amount: ";
            double depositeAmount;
            cin>>depositeAmount;
            if(depositeAmount < 0){
                cout<<"Something is wrong. Please enter correct amount"<<endl;
                break;
            }
            balance += depositeAmount;
            cout<<"Amount of deposit: "<<depositeAmount<<" $ "<<endl;
            cout<<"New Balance is: "<<balance<<" $ "<<endl;
            break;

            case 3: cout<<"WithdrawAmount: ";
            double withDrawAmount;
            cin>>withDrawAmount;
            if(withDrawAmount < 0){
                cout<<"Something is wrong. Please enter correct amount"<<endl;
                break;
            }
            if(withDrawAmount <= balance){
                balance -= withDrawAmount;
                cout<<"Amount of withdrawal: "<<withDrawAmount<<" $ "<<endl;
                cout<<"New Balance is: "<<balance<<" $ "<<endl;
            }else{
                cout<<"not enough money"<<endl;
            }
            break;
        }
        } while(option != 4);


    return 0;
}
