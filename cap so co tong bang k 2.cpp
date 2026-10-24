#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;
	cin >> n >> k;
	vector <int> a(n);
	map <int,int> mp;
	long long dem =0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		dem += mp[k-a[i]];
		mp[a[i]]++;
	}
	cout << dem << endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

