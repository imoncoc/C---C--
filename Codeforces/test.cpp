#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = { 1, -2, -2, 1, -3};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_sum = INT_MIN;

    // Consider all blocks starting with i.
    for (int i = 0; i < n - k + 1; i++) {
        int current_sum = 0;
        for (int j = 0; j < k; j++){
            current_sum = current_sum + arr[i + j] + arr[i+j+1];
        }
            cout<<current_sum<<endl;

        // Update result if required.
        max_sum = max(current_sum, max_sum);
    }
    cout<<max_sum<<endl;

    return 0;
}
