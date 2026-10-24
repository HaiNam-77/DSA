#include<bits/stdc++.h>
using namespace std;
bool dp[1005][1005];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
			int n= s.size();
		s = "x" + s;
		int max1 =1;
	
			memset(dp,false,sizeof(dp));
			for(int i=1;i<=n;i++) dp[i][i]=true;
		for(int len=2;len<=n;len++){
			for(int i=1;i<=n-len+1;i++){
				int j = i+len-1;
				if(len==2){
					if(s[i]==s[j]) dp[i][j]=true;
					else dp[i][j]=false;
				}
				else{
					if(s[i]==s[j]) dp[i][j]=dp[i+1][j-1];
					else dp[i][j]=false;
				}
				if(dp[i][j]==true){
					max1 = max(max1,len);					
				}
			}
		}
		cout << max1 << endl;
	}
}

