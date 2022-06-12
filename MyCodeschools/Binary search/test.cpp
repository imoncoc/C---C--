#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int index, bool searchFirst){
    int low = 0, high = size - 1;
    int result = -1;

    while( low <= high ){
        int mid = low + (high-low)/2;

        if(index == arr[mid]){
                result = mid;
            if(searchFirst){
                high = mid - 1;
            }else{
                low = mid + 1;
            }

        }
        else if(index > arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return result;
}

int main(){
    int arr[] = {1 ,3 ,3 ,3 ,5 ,5 ,5, 5 ,7 ,9 ,10};
    int size = sizeof(arr)/sizeof(arr[0]);
     int n;

    cout<<"Input Your what you want to Search: ";
    cin>>n;

    int firstIndex = binarySearch(arr, size, n , true);

    if(firstIndex == -1){
        cout<<"Not Found!"<<endl;
    }else{
        int lastIndex = binarySearch(arr, size, n, false);
        cout<<"Total Occurnace: "<<(lastIndex - firstIndex) + 1<<" times."<<endl;
    }



    return 0;
}
