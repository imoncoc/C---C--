#include<bits/stdc++.h>
using namespace std;
int stack_arr[5];
int first = -1;

void push(int data){
    first++;
    for (int i = first; i > 0; i--){
        stack_arr[i] = stack_arr[i - 1];
    }
    stack_arr[0] = data;
}

printStack(){
    if(first == -1){
        cout<<"Stack underflow"<<endl;
        exit(1);
    }
    for(int i = 0; i <= first; i++){
        cout<<stack_arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);

   printStack();


    return 0;
}

