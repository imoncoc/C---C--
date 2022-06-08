#include<iostream>
using namespace std;
int main(){
    long long int num;
    cin>>num;
    num = abs(num);

    int count = 0, size = 0;

    while(num != 0){
        unsigned long long a = 0, b = 0;
        a = num % 10;
        b = num / 10;
        num = b;
        size++;
        if(a == 4 || a == 7) count++;
    }

    if(count == 4 || count == 7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    //cout<<"%: "<<num % 10<<endl;
     //cout<<"/: "<<num / 10<<endl;



    return 0;
}
