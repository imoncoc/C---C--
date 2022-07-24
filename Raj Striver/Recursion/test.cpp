#include<iostream>
using namespace std;

void f(int i, int sum){
    if(i < 1){
            cout<<sum<<endl;
        return;
    }

    f(i-1, sum+i);
}
int main(){
    int arr[] = {5, 10, 15, 20, 25, 30};
    int n = 3;

    f(n, 0);




    return 0;
}
