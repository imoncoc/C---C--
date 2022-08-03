#include<bits/stdc++.h>
using namespace std;
int main(){
    //vector<vector<int>> arr = { {1, 5, 9, 10}, {10, 11, 13, 14}, {12, 13, 15, 16} };
    vector<vector<int>> arr = { {1, 5, 9}, {10, 11, 13}, {12, 13, 15} };

    int target;
    cout<<"Enter your search value: ";
    cin>>target;

    int n = arr.size();
    int m = arr[0].size();

    priority_queue<int>pq;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                pq.push(arr[i][j]);
                if(pq.size() > target){
                    pq.pop();
                }
            }
        }


        cout<<pq.top()<<endl;




    return 0;
}


