#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int a[100];
void in(int a[],int n){
	for(int i=1;i<=n-2;i++){
		if(a[i]==0) s[i]='A';
		else s[i]='H';
	}
	auto found = s.find("HH");
	if(found == string::npos){
		cout << s << endl;
	}
	
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i] = j;
		if(i==n-2){
			s[0]='H';
			s[n-1]='A';
			in(a,n);
		}
		else Try(i+1);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		if(n==2){
			cout << "HA" << endl;
			continue;
		}
		s.resize(n);
		Try(1);
		cout << endl;
	}
}
