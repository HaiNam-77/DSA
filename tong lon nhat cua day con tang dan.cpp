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
		vector <int> a(n+1),dp(n+1);
		long long max1=0;
		for(int i=1;i<=n;i++){
			cin >> a[i];
			if(a[i]>max1) max1=a[i];
		}
		for(int i=1;i<=n;i++){
			dp[i]=a[i];
			for(int j=1;j<i;j++){
				if(a[i]>a[j]){
					dp[i]=max(dp[i],dp[j]+a[i]);
				}
			}
			if(dp[i]>max1) max1=dp[i];
		}
		cout << max1 << endl;
		
	} 
}

