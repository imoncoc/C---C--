
#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[] = {3, 2, 9, 4, 7, 1, 6};
    int n = 7;
    bool flag = true;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n -i-1; j++){
            if(A[j] > A[j+1]){
                swap(A[j], A[j+1]);
                flag = false;
            }
        }
        if(flag == true) break;
    }

    for(int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }

    return 0;
}
