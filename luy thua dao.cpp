#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9 + 7;
ll dao(ll n){
	ll res=0;
	while(n>0){
		res = res*10 + n%10;
		n/=10;
	}
	return res;
}
ll lt(ll a,ll b){
	if(b==0) return 1;
	ll x = lt(a,b/2);
	if(b%2!=0) return ((x*x)%mod * (a%mod))%mod;
	return (x*x)%mod;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll r = dao(n);
		cout << lt(r,n) << endl;
	}
}

