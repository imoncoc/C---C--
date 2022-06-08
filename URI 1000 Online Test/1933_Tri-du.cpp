#include<iostream>
using namespace std;
int main(){
    int a, b;

    while((cin>>a>>b)){
        if(a > b){
        cout<<a<<endl;
    }
    if(b > a ){
        cout<<b<<endl;
    }else if(a == b){
        cout<<a<<endl;
    }
    }



return 0;
}
