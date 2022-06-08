#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][3];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin>>arr[i][j];
        }
    }

    int count = 0, countInside = 0;
    for(int i = 0; i < n; i++){
            countInside = 0;
        for(int j = 0; j < 3; j++){
            //cout<<arr[i][j]<<" ";
            if(arr[i][j] == 1){
               countInside++;
            }

        }
        if(countInside >= 2) count++;
        //cout<<endl;
    }


    cout<<count<<endl;

    return 0;
}
