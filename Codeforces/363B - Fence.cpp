#include<bits/stdc++.h>
using namespace std;

int main(){
   long long n,k,ans=0,sum=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    //cout<<"sum: "<<sum<<endl;
    long long sum2=sum;
    //cout<<"sum2: "<<sum2<<endl;

    for(int i=1;i<n-k+1;i++){
        sum2+=a[i+k-1]-a[i-1];
        //cout<<sum2<<endl;
        if(sum2<sum){
            ans=i;
            sum=sum2;
        }
    }
    cout<<ans+1<<endl;

    return 0;

}
