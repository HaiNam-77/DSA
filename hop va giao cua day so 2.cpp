#include<bits/stdc++.h>
using namespace std;
void giao(int n,int a[],int m,int b[]){
	set <int> se;
	for(int i=0;i<n;i++) se.insert(a[i]);
	for(int i=0;i<m;i++) se.insert(b[i]);
	for(int x : se){
		cout << x << " ";
	}
	cout << endl;
}
void hop(int n,int a[],int m,int b[]){
	map <int,int> mp;
	for(int i=0;i<n;i++) mp[a[i]]++;
	for(int i=0;i<m;i++){
		if(mp[b[i]]>0) cout << b[i] << " ";
	}
}
void solve(){
	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<m;i++) cin >> b[i];
	sort(a,a+n);
	sort(b,b+m);
	giao(n,a,m,b);
	hop(n,a,m,b);
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

