
// Program to check if a character is in
// uppercase using isupper()
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char x;
    cin >> x;
    if (isupper(x))
        cout << "Uppercase";
    else
        cout << "Not uppercase.";
    return 0;
}
