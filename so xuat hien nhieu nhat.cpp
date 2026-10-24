#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> a(n);
		map <int,int> mp;
		long long max = -1e18;
		int sohang;
		for(int i=0;i<n;i++){
			cin >> a[i];
			mp[a[i]]++;
			if(mp[a[i]]>max){
				max = mp[a[i]];
				sohang = a[i];
			}
		}
		if(max > n/2) cout << sohang << endl;
		else cout << "NO" << endl;
	}
}

