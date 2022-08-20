#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);


    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < k; i++){
            int target;
    cin>>target;
        int left = -1, right = n;
        while(right > left+1){
            int mid = (left + right)/2;

            if(arr[mid] <= target){
                left = mid;
            }else{
                right = mid;
            }
        }

        cout<<left+1<<endl;
    }


    return 0;
}
