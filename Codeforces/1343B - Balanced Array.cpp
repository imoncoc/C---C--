#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int ans = 0, reminder = 1;

    if(n % 4 == 0){
            cout<<"YES"<<endl;
            int even = 0, odd = 1;
        for(int i = 0; i < (n/2) ; i++){
            even += 2;
            ans += even;
            cout<<even<<" ";
        }

        for(int i = 0; i < (n / 2) - 1 ; i++){
            if(i == 0) cout<<odd<<" ";
            else if( i != (n/2) - 1 ) {
                odd += 2;
                cout<<odd<<" ";
                reminder += odd;
            }
        }

        //cout<<"ans: "<<ans<<endl;
        //cout<<"rem: "<<reminder<<endl;
        cout<<ans-reminder<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }
    }






    return 0;
}
