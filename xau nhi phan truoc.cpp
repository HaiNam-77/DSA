#include<bits/stdc++.h>
using namespace std;

void XnpTruoc(string s){
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]=='0') s[i]='1';
		else{
			s[i]='0';
			break;
		}
	}
	cout << s;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		XnpTruoc(s);
		cout << endl;
	}
}

