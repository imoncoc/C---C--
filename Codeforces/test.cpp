#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{

    for (auto itr = mp2.begin(); itr != mp2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }

    for (auto itr = mp3.begin(); itr != mp3.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }


    return 0;
}
