#include<bits/stdc++.h>
using namespace std;
int main(){
    int acc;
	cin >> acc;
	if(acc >= 0) cout << acc;
	else{
		int last,las2;
		last = acc%(-10);
	    //cout << last << endl;
		las2 = (acc/10)%(-10);
	    //cout << las2 << endl;
		if(last <= las2) cout << acc/10;
		else cout << (acc/10)-las2+last;
	}
	return 0;

}
