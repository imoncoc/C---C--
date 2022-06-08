#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long  n;
    while(cin>>n)
    {
        if(n == -1) break;
        if(n == 0) printf("0n");
        else printf("%llun", n - 1);
    }
    return 0;
}
