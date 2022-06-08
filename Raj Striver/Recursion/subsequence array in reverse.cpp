#include<bits/stdc++.h>
using namespace std;
void printSequences(int ind, vector<int> &ds, int arr[], int n){
    if(ind == n){
        for(auto it: ds){
            cout<<it<<" ";
        }
        if(ds.size() == 0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }

    //Not pick, or not take condition, this element is not to your subsequence
    printSequences(ind+1, ds, arr, n);

    //Take or pick the particular index into the subseqence
    ds.push_back(arr[ind]);
    printSequences(ind+1, ds, arr, n);
    ds.pop_back();


}
int main(){
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> ds;
    printSequences(0, ds, arr, n);


    return 0;
}


