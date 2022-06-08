#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch;
    cin>>ch;

    int inArr[n], m, sum = 0;
    char arr[3];
    for(int i = 0; i < n; i++){
        cin>>m;
        sum += m;
    }
    if(ch == 'A'){
        arr[0] = 'A';
        arr[1] = 'B';
        arr[2] = 'C';
    }
    else if(ch == 'B'){
        arr[0] = 'B';
        arr[1] = 'C';
        arr[2] = 'A';
    }else{
        arr[0] = 'C';
        arr[1] = 'A';
        arr[2] = 'B';
    }

    cout<<arr[sum % 3]<<endl;


    return 0;
}
