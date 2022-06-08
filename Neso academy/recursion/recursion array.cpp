#include<iostream>
using namespace std;

int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int makeSum(int index) {

    if (index == 0) {
        return arr[0];
    }

    int result = arr[index] + makeSum(index-1);
    return result;
}

int main()
{


    int sum = 0;

    for (int i = 0; i < 10; ++i) {
        sum += arr[i];
    }

    cout << sum << endl;

    cout << "Recursive Sum = " << makeSum(9) << endl;

    return 0;
}
