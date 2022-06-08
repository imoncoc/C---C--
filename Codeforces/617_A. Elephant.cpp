#include<iostream>
using namespace std;
int main(){
    int n, m = 0;
    cin>>n;
    int count = 0;

    for(int i = 0; i < 1000000; i++){
        if(n <= 0) break;
        else{
            n -= 5;
            count++;
        }
    }


    cout<<count<<endl;


    return 0;
}
