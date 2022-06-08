
// CPP program to illustrate
// push_back() function
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myvector;
    myvector.push_back(6);

    // Vector becomes 1, 2, 3, 4, 5, 6
    for (int i = 0; i < 6; i++){
        cin>>i;
    }


    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
}
