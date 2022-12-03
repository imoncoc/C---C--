#include<iostream>
using namespace std;
int main(){
    int sum = 0;

    for(int i = 1; i <= 10; i++){
        if(i == 10){
            sum -= i;
        }
        else{
            sum += i;
        }
    }

    cout<<sum<<endl;

    return 0;
}
