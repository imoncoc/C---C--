#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int arr[n];
    int flag = 0;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }


        for (int i = 0; i < n; i++){
                sum = 0;
                int ans = 0;
            for(int j = 0; j < n; j++){
                if(arr[i] != arr[j]){
                    sum += arr[j];
                }else{
                    ans = arr[i];
                }
            }
            if( (sum/(n-1)) == ans){
                //cout<<"sum: "<<sum<<endl;
                    //cout<<"SUM: "<<sum/n-1<<" ANS: "<<ans<<endl;
                cout<<"Yes"<<endl;
                flag++;
                break;
            }
        }
        if(flag == 0){
           cout<<"NO"<<endl;
        }




    }




    return 0;
}
