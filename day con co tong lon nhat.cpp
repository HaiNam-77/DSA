#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,q;
	cin >> n >> q;
	int a[n+1];
	vector <long long> pref(n+1,0);
	for(int i=1;i<=n;i++){
		cin >> a[i];
		if(a[i] > 0){
			pref[i]=pref[i-1] + a[i];
		}
		else{
			pref[i]=pref[i-1];
		}
	}
	while(q--){
		int l,r;
		cin >> l >> r;
		long long tong = pref[r]-pref[l-1];
		cout << tong << endl;
		
}
}

