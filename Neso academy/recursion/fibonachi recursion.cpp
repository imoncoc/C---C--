#include<iostream>
using namespace std;

// 0 1 1 2 3 5 8 13
int fibonachi(int n)
{
    if (n == 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    }

    int number;
                5                3
    number = fibonachi(n-1) + fibonachi(n-2);

    return number;
}

int main()
{
    cout << fibonachi(5) << endl;




    return 0;
}
