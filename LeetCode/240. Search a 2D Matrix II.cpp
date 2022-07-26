#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr = {{1,4,7,11,15}, {2,5,8,12,19}, {3,6,9,16,22},
                      {10,13,14,17,24}, {18,21,23,26,30} };

    int target;
    cout<<"Enter your search value: ";
    cin>>target;
    string res = "NO";

    int n = arr.size();
    int m = arr[0].size();

    cout<<"n: "<<n<<" m: "<<m<<endl;

    int i = 0;
    int j = m-1;

    cout<<"I: "<<i<<" J: "<<j<<endl;

    while(i < n && j >= 0){
            cout<<arr[i][j]<<endl;
        if(arr[i][j] == target){
            res = "YES";
            break;
        }
        if(arr[i][j] > target) j--;
        else i++;
    }

    cout<<res<<endl;





    return 0;
}
