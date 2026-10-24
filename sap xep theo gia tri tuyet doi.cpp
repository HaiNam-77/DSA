#include<bits/stdc++.h>
using namespace std;
int x;
bool compare(int a,int b){
	return abs(x-a) < abs(x-b);
}
void solve(){
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n >> x;
	int a[n+1];
	for(int i=0;i<n;i++) cin >> a[i];
	stable_sort(a,a+n,compare);
	for(int i=0;i<n;i++) cout << a[i] << " ";
	cout << endl;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}

