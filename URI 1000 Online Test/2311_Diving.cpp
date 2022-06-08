#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        double deg;
        cin>>str;
        cin>>deg;

        double arr[7], sum =0;
        for(int i = 0; i < 7; i++){
            cin>>arr[i];
            sum += arr[i];
        }
        sort(arr, arr + 7);
        sum = sum - (arr[0]+ arr[6]);
        sum = sum * deg;

        cout<<str<<" "<<fixed<<setprecision(2)<<sum<<endl;

    }


    return 0;
}
