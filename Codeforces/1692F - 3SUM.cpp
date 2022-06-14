#include<bits/stdc++.h>
using namespace std;
int main(){
       int t;
       cin>>t;
       while(t--){
         int n;
    cin>>n;
    int arr[n];
    string res = "NO";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    unsigned int opsize = pow(2, n);
    for (int counter = 1; counter < opsize; counter++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            /* Check if jth bit in the counter is set
                If set then print jth element from arr[] */
            if (counter & (1<<j)){
                //cout << arr[j] << " ";
                sum += arr[j];
                //cout<<"sum: "<<sum<<endl;
                if(abs(sum) % 10 == 3) {
                    res = "YES";
                }
            }




        }

        //cout << endl;
    }

    cout<<res<<endl;
       }



    return 0;
}
