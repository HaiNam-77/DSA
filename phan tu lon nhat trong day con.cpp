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
		long long max = -1e18;
		for(int i=0;i<n ;i++){
			cin >> a[i];
			if(i<k && a[i] > max){
				max = a[i];
			}
		}
		cout << max << " ";
		for(int i=k;i<n;i++){
			if(a[i] >= a[i-k] && a[i] >= max) max = a[i];
			else if(a[i] < a[i-k] && a[i-k]==max){
				long long max1 = -1e18;
				for(int j=i-k+1;j<=k;j++){
					if(a[j] > max1) max1 = a[j];
				}
				cout << max1 << " ";
				continue;
			}
			cout << max << " ";
		}
		cout << endl;
	} 
}
