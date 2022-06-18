#include<iostream>
using namespace std;
int main(){
    //int arr[] = {1,2,3,4};
    //int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int arr[] = {-2, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = INT_MIN;


    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
                int sum = 0;
            for(int k = i; k <= j; k++){
                cout<<arr[k]<<" ";
                sum += arr[k];
            }
            cout<<endl;
            if(ans < sum){
                ans = sum;
            }
        }
    }

    cout<<"Ans: "<<ans<<endl;

    return 0;
}

