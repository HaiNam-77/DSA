#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;
	cin >> n >> k;
	map <int,int> mp;
	vector <int> v;
	long long dem=0;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		v.push_back(x);
		dem += mp[k-v[i]];
		mp[x]++;
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

