#include<iostream>
using namespace std;
int main(){
    //int arr[] = {1,2,3,4};
    //int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    //int arr[] = {-2, -1};
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int currentMax = 0, maxTillNOw = INT_MIN;

    for(int i = 0; i < n; i++){
        currentMax = max(arr[i], currentMax+ arr[i]);
        maxTillNOw = max(maxTillNOw, currentMax);
    }




    cout<<"Ans: "<<maxTillNOw<<endl;

    return 0;
}


