#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		vector <int> vt;
		for(int i=0;i<n;i++){
			int x;
			cin >> x;
			vt.push_back(x);
		}
		map <int,int> mp;
		for(int i=0;i<n;i++){
			mp[vt[i]]++;
		}
		if(mp[x]==0) cout << "-1" << endl;
		else cout << mp[x] << endl;
	}
}

