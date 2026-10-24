#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 +7;
long long lt(long long n,long long k){
	if(k==0) return 1;
	long long x = lt(n,k/2);
	if(k%2!=0) return ((x*x)%mod * (n%mod)) % mod;
	return (x*x)%mod;
	
}
long long lt2(long long n,long long k){
	long long res =1;
	while(k){
		if(k%2==1){
		res = (res*n)%mod;
	}
		k/=2;
		n = (n*n)%mod;
	}
	return res;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		long long n,k;
		cin >> n >> k;
		cout << lt2(n,k) << endl;
	} 
}

