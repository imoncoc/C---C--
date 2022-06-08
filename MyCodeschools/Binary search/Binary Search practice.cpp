#include<iostream>
using namespace std;
int BinarySearch(int a[],int len,int x){
int high = len - 1;
int low = 0;

while(low <= high){
    int mid = low + (high - low) /2;
    if (x == a[mid]){
        return mid;
    }
    else if (x < a[mid]){
        high = mid - 1;
    }
    else{
        low = mid + 1;
    }
}
return -1;
}

int main(){

int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
int len = sizeof(arr)/sizeof(arr[0]);
int x;

cout<<"Enter Your search: ";
cin>>x;

int index = BinarySearch(arr, len, x);

if(index != -1){
    cout<<x<<" is found in position "<<index;
}
else{
    cout<<"Your Search isn't Found.";
}

return 0;
}
