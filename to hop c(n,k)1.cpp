#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
void solve(){
    int n,k;
    cin >> n >> k;
    int C[n+1][n+1];
    memset(C,0,sizeof(C));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) C[i][j]=1;
            else{
                C[i][j] = (C[i-1][j-1] + C[i-1][j])%mod;
            }
        }
    }
    cout << C[n][k] << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}