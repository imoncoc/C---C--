
#include<iostream>
using namespace std;
int main(){
    int A[] = {10, 5, 7, 8, 6, 2};
    for (int i = 0; i < 6-1; i++){
           if(A[i] > A[i+1]){
                swap(A[i], A[i+1]);
            }
            cout<<"Sort ";
    for (int i = 0; i < 6; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    }

    cout<<endl<<"Main :";
    for (int i = 0; i < 6; i++){
        cout<<A[i]<<" ";
    }



return 0;
}
