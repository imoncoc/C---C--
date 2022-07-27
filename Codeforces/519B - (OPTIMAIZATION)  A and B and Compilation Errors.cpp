#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for(int i = 0; i < n; i++){
            int x;
        cin>>x;
        sum1 += x;
    }

    for(int i = 0; i < n-1; i++){
            int x;
        cin>>x;
        sum2 += x;
    }

    for(int i = 0; i < n-2; i++){
            int x;
        cin>>x;
        sum3 += x;
    }


    cout<<sum1 - sum2<<endl;
    cout<<sum2 - sum3<<endl;






    return 0;
}
