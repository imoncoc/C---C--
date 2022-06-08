#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 0, 1, 2, 3, 4 };

    sort(arr, arr + 5);

    cout << "The 3! possible permutations with 3 elements:\n";
    do {
        cout <<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<< "\n";
    } while (next_permutation(arr, arr + 5));

    cout << "After loop: " << arr[0] << ' '
         << arr[1] << ' ' << arr[2] << ' '<<arr[3]<<' '<<arr[4]<< '\n';

    return 0;
}
