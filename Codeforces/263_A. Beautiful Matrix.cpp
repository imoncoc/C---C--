#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    int a = 0, b = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(arr[i][j] == 1){
                a = i, b = j;
            }
        }

    }

    int ans = 0;
    ans = abs(a - 2) + abs(b - 2);
    cout<<ans<<endl;


    return 0;
}
