#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		vector <int> a(n);
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a.begin(),a.end());
		long long tongmin=0,tongmax=0;
		if(k <= n-k){
			for(int i=0;i<k;i++) tongmin+= a[i];
			for(int i=k;i<n;i++) tongmax+=a[i];
		}
		else{
			for(int i=0;i<n-k;i++) tongmin+= a[i];
			for(int i=n-k;i<n;i++) tongmax+=a[i];
		}
		cout << tongmax - tongmin << endl;
	}
}

