#include<iostream>
using namespace std;
int main(){
    int v[3] = {10, 100, 200};
    int* ptr;
    ptr = v;

    for(int i = 0; i < 3; i++){
        cout<<"Value of *pointer: "<<*ptr<<endl;
        cout<<"Value of pointer: "<<ptr<<endl;
        cout<<"Value of pointer: "<<ptr[i]<<endl;
        ptr++;
    }

return 0;
}
