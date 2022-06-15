#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int k = 3;

    for (int i = 0; i < n - k + 1; i++) {
        int current_sum = 0;
        for (int j = 0; j < k; j++){
            current_sum = current_sum + arr[i + j];
            cout<<current_sum<<" ";
        }
        cout<<endl;


        // Update result if required.

        //max_sum = max(current_sum, max_sum);
    }

    return 0;
}
