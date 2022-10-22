#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    int a = count(s.begin(),s.end(),'1');
    if( a > 1) a = 1;
    else a = 0;

    if(n >= 100) cout<<50<<endl;
    else{
        int x = (n-1)/2;
        if( ( n-1 ) % 2 != 0 && a == 0) x++;
        cout<<x+a<<endl;
    }
    return 0;



    return 0;
}

