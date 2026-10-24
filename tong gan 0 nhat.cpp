#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> v(n);
		for(int i=0;i<n;i++) cin >> v[i];
		long long min = 1e18;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				long long x = v[i] + v[j];
				if(abs(x) < abs(min)) min = x;
			}
		}
		cout << min << endl;
	}
}
