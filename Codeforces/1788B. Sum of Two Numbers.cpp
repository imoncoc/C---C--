#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
		cin>>n;
		int n1=0,n2=0;
		int counter=0;
		int a=1;
		while(n>0)
		{
			int rem = n % 10;
			if( rem % 2 == 0)
			{
				n1+=a*( rem /2);
				n2+=a*( rem /2);
			}
			else if( rem  % 2 != 0 && counter%2 ==0)
			{
				n1+=a * (rem +1)/2;
				n2+=a * (rem-1) /2;
				counter++;
			}
			else
			{
				n1+=a* (rem-1) /2;
				n2+=a* (rem +1)/2;
				counter++;
			}
			a*=10;
			n/=10;
		}
		cout<<n1<<" "<<n2<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

