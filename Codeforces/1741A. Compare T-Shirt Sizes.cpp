#include <bits/stdc++.h>
using namespace std;
void solve(){
    string a,b;
	cin>>a>>b;
	if(a==b){
		cout<<"=\n";
		return;
	}
	int x,y;
	//m l s
	if(a.back()=='L')x=2;
	if(a.back()=='M')x=1;
	if(a.back()=='S')x=0;
	if(b.back()=='L')y=2;
	if(b.back()=='M')y=1;
	if(b.back()=='S')y=0;
//	cout<<x<<' '<<y<<'\n';
	if(x!=y){
		if(x<y)cout<<"<\n";
		else cout<<">\n";
	}else{
		int cnt1=0,cnt2=0;
		for(char i:a)if(i=='X')cnt1++;
		for(char i:b)if(i=='X')cnt2++;
		if(a.back()=='L'){
			if(cnt1>cnt2)cout<<">\n";
			else cout<<"<\n";
		}else{
			if(cnt1>cnt2)cout<<"<\n";
			else cout<<">\n";
		}

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
