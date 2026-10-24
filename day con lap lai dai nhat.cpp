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
		string s;
		cin >> s;
		vector <int> dp(n+1,0);
		int max1=0;
		for(int i=1;i<=n;i++){
			for(int j=i-1;j>=1;j--){
				if(s[i-1]==s[j-1]){
					dp[i]=dp[j]+1;
					if(dp[i]>max1) max1=dp[i];
					break;
				}
			}
		}
		cout << max1 << endl;
	}
}


