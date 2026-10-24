#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 +7;
void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	long long kq=0;
	for(int i=1;i<n;i++){
		kq += a[i]*i;
		kq %= mod;
	}
	cout << kq;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}

