#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
    cin>>str;

    bool flag = false;
    int count = 0;
    int n = str.size();
    int first = -1, last = n +1;

    for(int i = 0; i < n; i++){
        if(str[i] == '1') {
            first = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(str[i] == '1') {
            last = i;
            break;
        }
    }

   // cout<<"first: "<<first<<endl;
    //cout<<"last: "<<last<<endl;

    if(first != -1 || last != n+1){
        for(int i = first; i < last; i++){
        if(str[i] == '0')count++;
    }
    }

    if(n == 0 || n == 1 || n == 2)count = 0;

    cout<<count<<endl;
    }










    return 0;
}
