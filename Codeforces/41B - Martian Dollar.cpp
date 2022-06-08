#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,b;
    cin>>n>>b;
     int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int minPrice = INT_MAX;
    int maxProfit = 0;
    int mini = 0, maxi = 0;
    int ans = 0;


    for(int i = 0; i < n; i++){
        minPrice = min(minPrice, arr[i]);
        maxProfit = max(maxProfit, arr[i] - minPrice);
        if(ans < maxProfit){
            ans = maxProfit;
            mini = minPrice;
            maxi = arr[i];

        }
    }


     if(maxi == 0){
        cout<<b<<endl;
    }else{
         int temp = b / mini;
         int temp2 = b % mini;
         int anss = maxi * temp + temp2;
             cout<<anss<<endl;
    }





/*
cout<<"mini: "<<mini<<endl;
    cout<<"maxi: "<<maxi<<endl;

    //cout<<maxi * temp + temp2<<endl;

cout<<"minPrice: "<<minPrice<<endl;
    cout<<"maxProfit: "<<maxProfit<<endl;

    cout<<"ans: "<<ans<<endl;
    cout<<"temp: "<<temp<<endl;
    cout<<"temp2: "<<temp2<<endl;
    */

    return 0;
}
