#include<iostream>
using namespace std;
int BinarySearch(int a[],int len,int x){
int high = len - 1;
int low = 0, result = -1;

while(low <= high){
    int mid = low + (high - low) /2;

    if (x == a[mid]){
        result = mid;
         low = mid + 1;
    }
    else if (x < a[mid]){
        high = mid - 1;
    }
    else{
        low = mid + 1;
    }
}
return result;
}

int main(){

int arr[] = {1, 3, 5, 7, 7, 9, 11, 11, 13, 15};
int len = sizeof(arr)/sizeof(arr[0]);
int x;

cout<<"Enter Your search: ";
cin>>x;

int index = BinarySearch(arr, len, x);

if(index != -1){
    cout<<x<<" is found in position "<<index + 1;
}
else{
    cout<<"Your Search isn't Found.";
}

return 0;
}


