#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = 0, b = 0, c = 0, d = 0;
    while(n--){
            int temp;
        cin>>temp;
        if(temp == 4) d++;
        if(temp == 3) c++;
        if(temp == 2) b++;
        if(temp == 1) a++;
    }

    int taxi = d;

    if(c < a){
        taxi += c;
        a -= c;
        c = 0;
    }
    else if( a <= c ){
        taxi += a;
        c -= a;
        a = 0;
    }

    if( c > 0 ){
        taxi += c;
        c = 0;
    }

    if (b > 0){
        taxi += b /2;
        b %= 2;
    }

    int x = a + (b * 2);
    if(x <= 4 && x > 0) taxi++;
    else if(x % 4 != 0) taxi += (x/4) + 1;
    else taxi += x/4;

    cout<<taxi<<endl;







    return 0;
}
