#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		string n,m;
		cin >> n >> m;
		int x = n.size() , y = m.size();
		long long dp[x+1][y+1];
		for(int i=0;i<=x;i++){
			for(int j=0;j<=y;j++){
				if(i==0 || j==0) dp[i][j]=0;
				else{
					if(n[i-1]==m[j-1]) dp[i][j]=dp[i-1][j-1]+1;
					else dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
		cout << dp[x][y] << endl;
	}
}

