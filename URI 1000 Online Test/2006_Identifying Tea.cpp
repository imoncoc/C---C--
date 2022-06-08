#include<iostream>
using namespace std;
int main(){
    int n, count = 0;
    int a[5];

    cin>>n;
    for (int i = 0; i < 5; i++){
        cin>>a[i];
        if(a[i] == n){
            count++;
        }
    }
    cout<<count<<endl;


    return 0;
}
