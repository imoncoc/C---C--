#include<bits/stdc++.h>
using namespace std;
int fun(int ind, vector<int> &ds, int sum, int target, vector<int> &arr, int n){
    if(ind == n){
        if(sum == target){
            return 1;
        }

        return 0;
    }

    ds.push_back(ind);
    sum += arr[ind];

    //Pick
    int left = fun(ind+1, ds, sum, target, arr, n);

    sum -= arr[ind];
    ds.pop_back();

    //NOT Pick
    int right = fun(ind+1, ds, sum, target, arr, n);

    return left + right;
}

int main(){
    vector<int> arr = { 2, 7, 11, 15, 5, 4, 4 };
    int n = arr.size();
    int target = 9;
    vector<int> ds;
    cout<<fun(0, ds, 0, target, arr, n)<<endl;




    return 0;
}

