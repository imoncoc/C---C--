#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
	    cin>>n;
	    int d[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>d[i];
	    }

	    int a[n];
	    a[0]=d[0];
	    bool ans=false;
	    for(int i=1;i<n;i++)
	    {
	        int temp1 = a[i-1] - d[i];
	        int temp2 = a[i-1] + d[i];
	        if(temp1 == temp2 || temp1<0)
	        {
	            ans = true;
	            a[i] = a[i-1] + d[i];

	        }
	        else
	        {
	            ans = false;
	            break;
	        }
	    }

	    if(ans == false && n!=1)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	        for(int i = 0; i < n; i++)
	        {
	            cout<<a[i]<<" ";
	        }
	        cout<<endl;
	    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}

