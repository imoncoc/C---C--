#include<iostream>
#include <vector>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int high, low, ans;

    if(a > b && a > c){
        high = a;
        if(b > c) low = c;
        else low = b;

    }
    else if(b > a && b > c){
        high = b;
        if(a > c) low = c;
        else low = a;
    }

    else if(c > a && c > b){
        high = c;
        if(a > b) low = b;
        else low = a;
    }

    ans = high - low;
    cout<<ans<<endl;

    return 0;
}
