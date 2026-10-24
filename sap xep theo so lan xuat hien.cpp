#include<bits/stdc++.h>
using namespace std;
map <int,int> mp;
bool cmp(int x,int y){
	if(mp[x] == mp[y]) return x < y;
	return mp[x] > mp[y];
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		mp.clear();
		for(int i=0;i<n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}

