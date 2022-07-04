#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int p,q, count = 0;

    while(t--){
        cin>>p>>q;
        if(q - p >= 2) count++;
    }

    cout<<count<<endl;






    return 0;
}
