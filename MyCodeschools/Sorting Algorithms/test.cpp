#include<iostream>
using namespace std;
int main(){
    int A[] = {10, 5, 7, 8, 6, 2};
    for (int i = 0; i < 6-1; i++){
        cout<<endl;
            cout<<"A["<<i<<"] : "<<A[i];

           for ( int j = 0; j < 6-1; j++){
            if(A[j] > A[j+1]){
                swap(A[j], A[j+1]);
                cout<<"J : "<<j;
            }
        }

    }

    cout<<endl;
    for (int i = 0; i < 6; i++){
        cout<<A[i]<<" ";
    }




return 0;
}
