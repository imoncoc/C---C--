#include<iostream>
#include<string>
using namespace std;

class account{
    int accountNO;
    char name[50];
    int deposite;
    char type;

public:
    void create_account();
    void login_account();
    void deposite(int);
    void withdrawal(int);
    void quit();
};

void write_account();

int main(){
    char ch;
    int num;
    intro();

    do{
        system("cls");
        cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. CREATE NEW ACCOUNT";
		cout<<"\n\n\t02. LOGIN";
		cout<<"\n\n\t03. QUIT";
		cin>>ch;
		system("cls");
		switch(ch){
		    case '1': write_account();
		    break;
		}
    }


return 0;
}

write_account(){

}
