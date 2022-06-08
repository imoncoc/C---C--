#include<iostream>
using namespace std;
int BinarySearch(int a[],int len,int x, bool searchFirst){
int high = len - 1;
int low = 0, result = -1;

while(low <= high){
    int mid = low + (high - low) /2;

    if (x == a[mid]){
            result = mid;

            if(searchFirst){
                high = mid - 1;
            }
        else{
         low = mid + 1;
        }
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

int arr[] = {1, 1, 3, 3, 5, 5, 5, 5, 5, 9, 9, 11};
int len = sizeof(arr)/sizeof(arr[0]);
int x;

cout<<"Enter Your search: ";
cin>>x;

int firstIndex = BinarySearch(arr, len, x, true);

if(firstIndex == -1){
    cout<<"Count of"<<x<<" is "<<0;
}
else{
    int lastIndex = BinarySearch(arr, len, x, false);
    cout<<"Count of "<<x<<" is "<<(lastIndex - firstIndex) + 1;
}

return 0;
}



