#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		vector <long long> a(n);
		vector <long long> b(m);
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<m;i++) cin >> b[i];
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		long long kq = a[n-1] * b[0];
		cout << kq << endl;
	}
}

