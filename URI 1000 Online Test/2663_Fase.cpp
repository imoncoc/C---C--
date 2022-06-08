#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, num, a;
    cin>>n>>num;
        int count = 0;

    for(int i = 0; i < n; i++){
            cin>>a;
        if(a > num) count++;
    }
    cout<<count<<endl;





    return 0;
}
