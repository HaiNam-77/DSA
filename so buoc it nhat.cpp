#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		vector <long long> a(n+1);
		vector <long long> dp(n+1,1);
		for(int i=1;i<=n;i++) cin >> a[i];
		long long max1=1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				if(a[i]>=a[j]){
					dp[i]= max(dp[i],dp[j]+1);
				}
				if(dp[i]>max1) max1=dp[i];
			}
		}
		long long kq=n-max1;
		cout << kq << endl;
	}
}

