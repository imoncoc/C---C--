#include<iostream>
using namespace std;
int BinarySearch(int a[],int low,int high,int x){
    if(low > high){
        return -1;
    }
    int mid = low + (high - low)/2;
    if(x == a[mid]){
        return mid;
    }
    else if(x < a[mid]){
        return BinarySearch(a, low, mid-1, x);
    }
    else{
        return BinarySearch(a, mid + 1, high, x);
    }
}

int main(){
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int len = sizeof(arr)/sizeof(arr[0]);

    int x;
    int high = len - 1;
    int low = 0;

cout<<"Enter Your search: ";
cin>>x;

int index = BinarySearch(arr, low, high, x);

if(index != -1){
    cout<<x<<" is found in position "<<index + 1;
}
else{
    cout<<"Your Search isn't Found.";
}

return 0;
}
