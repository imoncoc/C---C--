#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int height = 0, sum = 0;

    for(int i = 1; i <= n; i++){
        sum += i *(i+1)/2;
        if(n - sum >= 0) height++;
        else break;
    }

    cout<<height<<endl;
    return 0;
}
