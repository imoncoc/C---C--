#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    system("cls");
    string s;
    cin >> s;
    int r;


    for (size_t i = 0; i < s.size(); i++)
    {
        r = '9' - s[i];
        if (s[i] < '5'|| s[i] == '9' && i == 0)
        {
            cout << s[i];
        }
        else
        {
            cout << r;
        }
    }
}
