#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sort(arr, arr + n, greater<int>());
    int count = 0;



    for(int i = 0; i < n; i++){
            if(arr[i] == 4){
                cout<<arr[i]<<endl;
                count++;
            }
            else if(arr[i] < 4){
                if( (arr[i]+arr[n-1]) == 4 && i != n-1){
                    count++;
                    n--;
                    //cout<<"else if: if:"<<arr[i]+ arr[n-1] <<endl;
                }
                else if( (arr[i] + arr[n-1]+ arr[n-2] ) == 4 && i != n-1 && i != n-2 ){
                    count++;
                    n--, n--;
                    //cout<<"else if: else if:"<<arr[i]+ arr[n-1] + arr[n-2] <<endl;
                }
                else if( (arr[i] + arr[n-1]+ arr[n-2] + arr[n-3] ) == 4 && i != n-1 && i != n-2 && i != n-3 ){
                    count++;
                    n--, n--, n--;
                    //cout<<"else if: else if:"<<arr[i]+ arr[n-1] + arr[n-2] <<endl;
                }
                else if( (arr[i]+arr[n-1]) <= 4 && i != n-1 ){
                        count++;
                        n--;
                        }
                else{
                        //cout<<"else if: else:"<<arr[i]<<endl;
                    count++;
                }
            }

        //cout<<arr[i] + arr[n-1] <<endl;
    }


    cout<<count<<endl;




    return 0;
}
