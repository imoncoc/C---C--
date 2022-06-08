#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
    cin>>n;
    int arr[n];
    int flag = 0;
    double sum = 0;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    if(sum / n == arr[0]){
        cout<<"YES"<<endl;
        flag++;
    }


    else if(flag == 0){
        for(int i = 0; i < n; i++){
                double ans = (double(sum) - double(arr[i]) )/ double(n-1);
        //cout<<"Ans: "<<ans<<endl;
        if( double(ans) == double(arr[i]) ){
            cout<<"Yes"<<endl;
            flag++;
            break;
        }
    }
    }else{
        cout<<"NO"<<endl;
    }

    if(flag == 0){
        cout<<"NO"<<endl;
    }

    }


    return 0;
}
