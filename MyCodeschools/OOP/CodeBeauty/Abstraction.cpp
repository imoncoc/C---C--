#include<iostream>
using namespace std;

class Smartphone{
public:
    virtual void TakeSelfie() = 0;
    virtual void MakeACall() = 0;
};

class Android: public Smartphone{
public:
    void TakeSelfie(){
        cout<<"Android selfie..."<<endl;
    }
    void MakeACall(){
        cout<<"Android calling..."<<endl;
    }
};

class IPhone: public Smartphone{
public:
    void TakeSelfie(){
        cout<<"IPhone selfie..."<<endl;
    }
    void MakeACall(){
        cout<<"IPhone calling..."<<endl;
    }
};

int main(){
    Smartphone* s1 = new Android();
    s1->TakeSelfie();
    s1->MakeACall();
    Smartphone* s2 = new IPhone();
    s2->TakeSelfie();
    s2->MakeACall();


return 0;
}
