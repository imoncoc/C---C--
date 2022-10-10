#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long count = 0;

            if(n >= 100) {
                count = n / 100;
                n = n % 100;
                //cout<<"n 100: "<<n<<endl;
            }
             if(n >= 20 ){
                count += n/20;
                n = n % 20;
                //cout<<"n 20: "<<n<<endl;
            }
             if(n >= 10){
                count += n/10;
                n = n % 10;
                //cout<<"n 10: "<<n<<endl;
            }
             if(n >= 5){
                count += n/5;
                n = n % 5;
                //cout<<"n 5: "<<n<<endl;
            }
            if(n >= 1){
                count += n;
                //cout<<"n 1: "<<n<<endl;
            }


    cout<<count<<endl;





    return 0;
}
