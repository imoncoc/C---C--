#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    for(int i = 0; i < m; i++){
        int n;
    cin>>n;
    int arr[n];
    vector<int> myvector;
    vector<int> answer;

    for(int i = 0; i < n; i++ ){
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++ ){
       // cout<<arr[i]<<" ";
        if(arr[i] % 2 == 1){
            myvector.push_back(arr[i]);
        }
    }

   // cout<<endl;

   // cout<<"My Vector: ";
    sort(myvector.begin(), myvector.end());

    for(int i = 0; i < myvector.size(); i++ ){
        //cout<<myvector[i]<<" ";
    }
   // cout<<endl;

    int length = myvector.size();
    int countlast = length - 1, countFirst = 0;

    for(int i = 0; i < length; i++ ){
        if(i % 2 == 0){
            answer.push_back(myvector[countlast--]);
        }
        else if(i % 2 == 1){
            answer.push_back(myvector[countFirst++]);
        }
    }

   // cout<<endl;
   // cout<<"Answer: ";
    for(int i = 0; i < answer.size(); i++ ){
        cout<<answer[i];
        if(answer.size() - 1 != i){
            cout<<" ";
        }
    }
    cout<<endl;
    }




    return 0;
}
