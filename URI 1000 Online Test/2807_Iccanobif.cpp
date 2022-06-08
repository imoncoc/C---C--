#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first = 1, second = 1;
    vector<int> myVector;

    if(n == 1){
        cout<<first<<endl;
        exit(0);
    }else if(n == 2){
        cout<<first<<" "<<second<<endl;
        exit(0);
    }
    else{

        myVector.push_back(first);
        myVector.push_back(second);

        for(int i = 3; i <= n; i++){
            myVector.push_back(first+second);

           int temp = second;
           second = first + second;
           first = temp;
        }
    }

    int m = myVector.size();

    /*for (auto i = myVector.end() - 1; i != myVector.begin() - 1; i--){
        cout << *i <<" ";
    }
    cout<<endl;*/

    for(int i = myVector.size() - 1; i >= 0; --i){
        cout<<myVector[i];
        if(i != 0){
            cout<<" ";
        }
    }
    cout<<endl;



    return 0;
}
