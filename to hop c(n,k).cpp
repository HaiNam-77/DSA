#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
long long C[1005][1005];
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		memset(C,0,sizeof(C));
		for(int i=0;i<=n;i++){
			for(int j=0;j<=i;j++){
				if(j==0 || j==i) C[i][j]=1;
				else C[i][j]= (C[i-1][j-1] + C[i-1][j])%mod;
			}
		}
		cout << C[n][k] << endl;
	}
}

