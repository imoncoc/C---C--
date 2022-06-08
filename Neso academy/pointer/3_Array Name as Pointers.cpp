#include<iostream>
using namespace std;
void geeks(){
    int val[3] = {5, 10, 15};
    int *ptr;
    ptr = val;
    cout<<"Elements of the array are: "<<endl;
    cout << ptr[0]<< " "<< ptr[1]<< " "<< ptr[2];
}
int main(){
    geeks();
    return 0;
}
