#include<iostream>
using namespace std;
int main(){
    int A[5] = {2, 4, 6, 8, 10};
    int *p = A;

    cout<<A<<endl; // In arra only A means A[0] memory
    cout<<&A[0]<<endl;  // like up word!
    cout<<A + 1<<endl; // A[1] Memory Location
    cout<<*A + 1<<endl; // A[1] value

    for (int i = 0; i < 5; i++){
        cout<<"Address = "<<&A[i]<<endl;
        cout<<"Address = "<<A+i<<endl;
        cout<<"Value = "<<A[i]<<endl;
        cout<<"Value = "<<*(A+i)<<endl; // IF you use *A+1 in array will give you a wrong value
    }

return 0;
}
