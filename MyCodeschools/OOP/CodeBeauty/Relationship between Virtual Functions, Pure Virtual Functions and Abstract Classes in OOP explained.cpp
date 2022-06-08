#include<iostream>
using namespace std;
class Instrument{
public:
    virtual void MakeSound() = 0;
};

class Accordion: public Instrument{
public:
    void MakeSound(){
        cout<<"Accordion playing..."<<endl;
    }
};

class Piano: public Instrument{
public:
    void MakeSound(){
        cout<<"Piano playing..."<<endl;
    }
};

int main(){
    Instrument* ins1 = new Accordion();
    //ins1-> MakeSound();
    Instrument* ins2 = new Piano();
    //ins2-> MakeSound();

    Instrument* instruments[2] = {ins1, ins2};
    for(int i = 0; i < 2; i++){
        instruments[i]->MakeSound();
    }





    return 0;
}
