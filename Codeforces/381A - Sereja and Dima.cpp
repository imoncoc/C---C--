#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];

    for(int i = 0; i < t; i++){
        cin>>arr[i];
    }
    int n = t;
    int low = 0, high = t-1;
    int siraj = 0, dima = 0;
    int i = 0;

    while(n--){
            //cout<<"Low: "<<arr[low]<<endl;
            //cout<<"High: "<<arr[high]<<endl<<endl;
            i++;
            if(low == high){
                    if(t % 2 == 0){
                        siraj += arr[low];
                        //cout<<"Siraj: "<<siraj<<endl;
                    }else{
                        dima += arr[low];
                        //cout<<"Dima: "<<dima<<endl;
                    }

            }

           else if(arr[low]> arr[high]){

            if( i % 2 == 0){
                siraj += arr[low];
                //cout<<"Siraj: "<<siraj<<endl;
            }else{
                dima += arr[low];
                //cout<<"Dima: "<<dima<<endl;
            }
            low++;
        }

        else{

        if(i % 2 == 0){
            siraj += arr[high];
            //cout<<"Siraj: "<<siraj<<endl;
        }else{
            dima += arr[high];
            //cout<<"Dima: "<<dima<<endl;
        }

        high--;
        }

    }


    //cout<<"Dima: "<<dima<<endl;
    //cout<<"Siraj: "<<siraj<<endl;
    cout<<dima<<endl;
    cout<<siraj<<endl;




    return 0;
}
