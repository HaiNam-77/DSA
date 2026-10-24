#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	vector <int> a(n);
	long long sum =0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		sum += a[i];
	}

	long long sumtrai=0;
	int dem=0;
	int ok=0;
	for(int i=0;i<n;i++){
		if(sumtrai*2 == (sum - a[i]) ){
			cout << i+1 << endl;
			ok =1;
			break;
		}
		sumtrai += a[i];
	}
	if(ok == 0) cout << "-1" << endl;
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

