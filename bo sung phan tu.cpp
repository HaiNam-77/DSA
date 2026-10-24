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
		int l = -1e9;
		int r = 1e9;
		set <int> se;
		for(int i=0;i<n;i++){
			cin >> a[i];
			se.insert(a[i]);
			if(a[i] > l) l = a[i];
			if(a[i] < r) r = a[i];
		}
		int sohang = l - r + 1;
		int kq = sohang-se.size();
		cout << kq << endl;
	}
}

