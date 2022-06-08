#include<bits/stdc++.h>
using namespace std;
int main(){

    int row,col;

    while(cin>>row>>col){
         int first = 0, last = 0;
         int row1,row2,col1,col2;
         int sum = 0;
         int arr[row][col];
    for ( int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin>>arr[i][j];

             if(arr[i][j] == 1){
                row1 = i;
                col1 = j;
            }
            if(arr[i][j] == 2){
                row2 = i;
                col2 = j;
            }
        }
    }
    sum = abs(row1 - row2) + abs(col1 - col2);
    cout<<sum<<endl;

    }



    return 0;
}
