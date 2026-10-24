#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,s;
		cin >> n >> s;
		vector <int> a(n);
		vector <bool> dp(s+1,false);
		dp[0]=true;
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n;i++){
			for(int j=s;j>=a[i];j--){
				if(dp[j-a[i]]==true) dp[j]=true;
			}
		}
		if(dp[s]==true) cout << "YES" << endl;
		else cout << "NO" << endl;
	} 
}

