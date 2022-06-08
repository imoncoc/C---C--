#include<iostream>
using namespace std;
class Adder {
private:
    int total;

public:
    Adder(int i = 0){
        total = i;
    }
    void addNum(int number){
        total += number;
    }
    int getTotal(){
        return total;
    }


};

int main(){
    Adder obj;
    obj.addNum(10);
    obj.addNum(20);
    obj.addNum(30);

    cout<<"Total = "<<obj.getTotal()<<endl;
    return 0;
}
