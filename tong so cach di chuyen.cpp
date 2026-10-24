#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 +7;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		vector<long long> dp(n + 1, 0);
		dp[0]=1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=k;j++){
				if(i-j>=0){
				dp[i]+=dp[i-j];
				dp[i]%=mod;
			}
			}
		}
		cout << dp[n] << endl;
	} 
}

