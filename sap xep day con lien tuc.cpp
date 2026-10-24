#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	int l=1,r=n;
	while(l<n && a[l] < a[l+1]) l++;
	if(l==n) return;
	while(r > 0 && a[r] > a[r-1]) r--;
	int min=1e9,max=-1e9;
	for(int i=l;i<=r;i++){
		if(a[i] > max) max = a[i];
		if(a[i] < min) min = a[i];
	}
	for(int i=1;i<=l;i++){
		if(a[i] > min) l =i;
	}
	for(int i=r;i<=n;i++){
		if(a[i] < max) r=i; 
	} 
	cout << l << " " << r << endl;
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

