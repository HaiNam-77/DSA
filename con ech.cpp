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
		vector <long long> dp(n+1,0);
		dp[0]=1;
		long long sum = 1;
		for(int i=1;i<=n;i++){
			dp[i]=sum;
			sum += dp[i];
			if(i>=3) sum-=dp[i-3];
		}
		cout << dp[n] << endl;
	}
}

