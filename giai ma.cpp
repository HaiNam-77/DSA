#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		 string m;
		 cin >> m;
		 if(m[0]=='0'){
		 	cout << "0" << endl;
		 	continue;
		 }
		 int n= m.size();
		 vector <long long> dp(n+1,0);
		 dp[0]=1,dp[1]=1;
		 for(int i=2;i<=n;i++){
		 	dp[i]=0;
		 	if(m[i-1]>'0') dp[i]+=dp[i-1];
		 	if(m[i-2]=='1' || m[i-2]=='2' && m[i-1]<='6') dp[i]+=dp[i-2];
		 }
		 cout << dp[n] << endl;
	}	
}


