#include<bits/stdc++.h>
using namespace std;
int main(){

    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for ( int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }

    for ( int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int first = 0, last = 0;

     for ( int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(arr[i][j] == 2){
                first = i + j;
            }
            if(arr[i][j] == 1){
                last = i + j;
            }
        }
    }

    cout<<"First : "<<first<<endl;
    cout<<"Last : "<<last<<endl;


    return 0;
}

