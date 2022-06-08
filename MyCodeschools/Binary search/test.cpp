#include<iostream>
using namespace std;
int BinarySearch(int a[], int length, int searchItem, bool search){
    int low = 0, high = length - 1 , result = -1;

    while(low <= high){
        int mid = low + (high - low)/2;
        if(searchItem == a[mid]){
            result = mid;
            if(search == true){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        else if (searchItem < a[mid]){

            high = mid - 1;

        }else{
            low = mid + 1;
        }
    }
    return result;
}
int main(){
    int arr[] = {5,10,15,20, 20 , 20,25, 25 , 25, 25,30,35,40};
    int len = sizeof(arr)/sizeof(arr[0]);
    int n;
    cout<<"Enter your seach element : ";
    cin>>n;
    int firstIndex = BinarySearch(arr, len, n, true);
    if(firstIndex == -1){
        cout<<"Your element wouldn't found!"<<endl;
    }else{
        int lastIndex = BinarySearch(arr, len, n, false);
        cout<<"Your search element "<<n<<" count is : "<<(lastIndex - firstIndex) + 1<<endl;
    }


    return 0;
}
