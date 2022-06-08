#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;

    int a,b,c;
    int ans = n % 3;

    if(ans == 0){
        a = (n/3)+1;
        b = (n/3);
        c = (n/3)-1;
    }else if(ans == 1){
        a = (n/3)+2;
        b = (n/3)+1;
        c = (n/3)-2;
        if(c == 0){
            c += 1;
            b -= 1;
        }
    }else if(ans ==2){
        a = (n/3)+2;
        b = (n/3)+1;
        c = (n/3)-1;
    }

    cout<<b<<" "<<a<<" "<<c<<endl;
    }





    return 0;
}
