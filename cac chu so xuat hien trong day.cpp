#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	set <int> se;
	for(int i=0;i<n;i++){
		while(a[i]!=0){
			int x = a[i]%10;
			se.insert(x);
			a[i]/=10;
		}
	}
	for(int x : se){
		cout << x << " ";
	}
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

