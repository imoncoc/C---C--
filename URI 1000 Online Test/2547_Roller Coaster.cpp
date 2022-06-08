#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, minHeight, maxHeidht;
    while(cin>>n>>minHeight>>maxHeidht){


    int num, count = 0;
    for(int i = 0; i < n; i++){
        cin>>num;

        if(num >= minHeight && num <= maxHeidht){
            count++;
        }
    }
    cout<<count<<endl;
    }


    return 0;
}
