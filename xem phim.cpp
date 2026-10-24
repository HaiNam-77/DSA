#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int c,n;
	cin >> c >> n;
	vector <int> w(n+1);
	int dp[n+1][c+1];
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++) cin >> w[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=c;j++){
			dp[i][j]=dp[i-1][j];
			if(j>=w[i]){
				dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+w[i]);
			}
		}
	}
	cout << dp[n][c];
}

