#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n % 2 == 1 || n == 2 || n == 4){
            cout<<-1<<endl;
        }
        else{
            int count = 0;
            while(n =! 0){
                if(n % 6 == 0){
                    n =  n/6;
                    count++;
                    if(n == 1){
                        break;
                    }
                }
                else if(n > INT_MAX){
                    cout<<-1<<endl;
                    break;
                }
                else{
                    n *= 2;
                    count++;
                }
            }

            cout<<count<<endl;
        }
    }




    return 0;
}
