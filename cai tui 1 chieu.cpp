#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin >> n >> m;
	vector <long long> x(n+1),y(n+1),dp(m+1,0);
	for(int i=1;i<=n;i++){
		cin >> x[i] >> y[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=x[i];j--){
			dp[j]=max(dp[j],dp[j-x[i]]+y[i]);
		}
	}
	cout << dp[m] << endl;
}

