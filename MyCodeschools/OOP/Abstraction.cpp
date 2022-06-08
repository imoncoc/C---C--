#include<iostream>
using namespace std;
class implementAbstraction{
private:
    int a, b;

public:
    void set (int x, int y){
        a = x;
        b = y;
    }
    void display(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main(){
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    // You can't access obj.a or obj.b because it is private but can use
    // then in inbuild function.


return 0;
}
