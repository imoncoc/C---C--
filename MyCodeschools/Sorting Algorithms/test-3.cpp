#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[] = {5, 4, 6, 7, 2 ,1, 10};
    int n = sizeof(A)/sizeof(A[0]);

    for(int i = 0; i < n- 1; i++){
            int minMun = i;
        for(int j = i+1; j <n; j++){
            if(A[minMun] > A[j]){
                minMun = j;
            }
        }
        int temp = A[i];
        A[i] = A[minMun];
        A[minMun] =  temp;
    }

    for(int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }

    return 0;
}
