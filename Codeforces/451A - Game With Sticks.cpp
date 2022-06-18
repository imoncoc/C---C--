#include<iostream>
using namespace std;
int main(){
        int n, m;
    cin>>n>>m;
    int i = 0;

    for(;;){
        if(n - i == 0) break;
        if(m - i == 0) break;

        i++;
    }


    if(i % 2 == 1){
        cout<<"Akshat"<<endl;
    }
    else{
        cout<<"Malvika"<<endl;
    }





    return 0;
}
