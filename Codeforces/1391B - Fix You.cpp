#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows, cols;
    cin>>rows>>cols;
    char arr[rows][cols];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin>>arr[i][j];
        }
    }
    int count = 0;

    if(arr[0][0] == 'R'){
            int ans = 0;
    for(int i = 0; i < rows; i++){
        for(int j = ans; j < cols; j++){
            cout<<arr[i][j]<<" ";
            if(i == 0 && j != cols-1 && arr[i][j] == 'D') count++;
        }
        ans = cols - 1;
        cout<<endl;
        cout<<"count: "<<count<<endl;
    }
    }



    if(arr[0][0] == 'D'){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
                if(i == rows-1 || j == 0 )
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    }






    return 0;
}
