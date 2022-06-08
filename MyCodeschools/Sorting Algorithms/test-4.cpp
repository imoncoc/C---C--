#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[] = {3, 2, 9, 4, 7, 1, 6};
    int n = 7;
    for(int i = 0; i < n - 1; i++){
        int iMin = i;
        for(int j = i+1; j < n; j++){
            if(A[j] < A[iMin]){
                iMin = j;
            }
        }
        int temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
    }

    for(int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
