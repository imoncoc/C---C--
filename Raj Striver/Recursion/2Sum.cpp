#include<bits/stdc++.h>
using namespace std;
void fun(int ind, vector<int> &ds, int sum, int target, vector<int> &arr, int n){
    if(ind == n){
        if(sum == target){
            for(auto it: ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }

        return;
    }

    ds.push_back(ind);
    sum += arr[ind];

    //Pick
    fun(ind+1, ds, sum, target, arr, n);

    sum -= arr[ind];
    ds.pop_back();

    //NOT Pick
    fun(ind+1, ds, sum, target, arr, n);

}

int main(){
    vector<int> arr = { 2, 7, 11, 15, 5, 4 };
    int n = arr.size();
    int target = 9;
    vector<int> ds;
    fun(0, ds, 0, target, arr, n);




    return 0;
}
