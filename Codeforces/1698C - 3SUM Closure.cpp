#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }

    long long int a = 0,b = 0,c = 0, sum = 0;
    string res = "YES";
    sort(arr, arr+n);

    for(int i = 0; i < n - 2; i++){
         a = arr[i] ;
         b = arr[i+1] ;
         c = arr[i+2] ;
        sum = a+b+c;

       // cout<<"a: "<<a<<endl;
        //cout<<"b: "<<b<<endl;
        //cout<<"c: "<<c<<endl;
        //cout<<"sum: "<<sum<<endl;

        if(sum == a || sum == b || sum == c ){
            continue;
        }
        else{
            res = "NO";
            break;
        }
    }



    cout<<res<<endl;
    }





    return 0;
}
