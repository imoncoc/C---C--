#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr = { {1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60} };

    int target;
    cout<<"Enter your search value: ";
    cin>>target;
    string res = "NO";

    int n = arr.size();
    int m = arr[0].size();

    cout<<"n: "<<n<<" m: "<<m<<endl;

    int low = 0;
    int high = (n*m) -1;

    cout<<"low: "<<low<<" high: "<<high<<endl;

    while(low <= high){
        int mid = low + (high - low)/2;
        cout<<"mid: "<<mid<<endl;
        cout<<arr[mid/m][mid%m]<<endl;

        if(arr[mid/m][mid%m] == target){
            res = "YES";
            break;
        }
        if(arr[mid/m][mid%m] < target) low = mid + 1;
        else high = mid - 1;
    }

    cout<<res<<endl;





    return 0;
}

