#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    vector<int> arr2;
    vector<int> arr3;

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());
    for(int i = 0; i < n-1; i++){
            int x;
           cin>>x;
        arr2.push_back(x);
    }
    for(int i = 0; i < n-2; i++){
            int x;
           cin>>x;
        arr3.push_back(x);
    }

    sort(arr.begin(), arr.end());
    sort(arr2.begin(), arr2.end());
    sort(arr3.begin(), arr3.end());

    int a = -1, b = -1;
    for(int i = 0; i < arr2.size(); i++){
        if(arr[i] != arr2[i]){
            a = arr[i];
            arr.erase (arr.begin()+i);
            break;
        }
    }
    if(a == -1){
        a = arr[arr.size()-1];
        arr.erase (arr.begin()+ arr.size()-1);
    }

    for(int i = 0; i < arr3.size(); i++){
        if(arr[i] != arr3[i]){
           b = arr[i];
           break;
        }
    }
    if(b == -1) b = arr[arr.size()-1];

    cout<<a<<endl;
    cout<<b<<endl;






    return 0;
}
