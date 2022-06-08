#include<iostream>
using namespace std;

class mobileUser
{
public:
    void call()
    {
        cout<<"Hello !"<<endl;
    }
    //virtual void is abtraction.
    virtual void sendMessage () = 0;
};

class rahim : public mobileUser
{
public:
    void sendMessage ()
    {
        cout<<"Hi, This is Rahim."<<endl;
    }
};

class karim : public mobileUser
{
public:
    void sendMessage ()
    {
        cout<<"Hi, This is Karim."<<endl;
    }
};


int main()
{
    mobileUser *m;

    rahim r;
    karim k;

    m = &r;
    m -> call();
    m -> sendMessage();

    m = &k;
    m ->call();
    m -> sendMessage();



    return 0;
}
