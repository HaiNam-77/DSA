#include<bits/stdc++.h>
using namespace std;
int dequy(long long n,long long k){
	long long x= pow(2,n-1);
	if(k==x) return n;
	if(k<x) return dequy(n-1,k);
	return dequy(n-1,k-x);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		long long n,k;
		cin >> n >> k;
		char c = 'A' + dequy(n,k) -1;
		cout << c << endl;
	}
}

