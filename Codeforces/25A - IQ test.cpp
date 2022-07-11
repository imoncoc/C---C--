#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int even = 0, odd = 0, ans = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 1) odd++;
        else even++;
    }

    //cout<<"even: "<<even<<endl;
    //cout<<"odd: "<<odd<<endl;

    if(odd == 1){
        for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 1) ans = i;
    }
    }
    else{
        for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0) ans = i;
    }
    }


    cout<<ans+1<<endl;


    return 0;
}
