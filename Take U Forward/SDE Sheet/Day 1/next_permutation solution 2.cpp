#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,5};

    for(int i = arr.size()-2; i >= 0; --i){
        cout<<arr[i]<<" ";
    }

    return 0;
}
