#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,v;
    cin >> n >> v;
    vector <int> a(n+1);
    vector <int> c(n+1);
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int j=1;j<=n;j++) cin >> c[j];
    int dp[n+1][v+1];
     memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=v;j++){
            dp[i][j]=dp[i-1][j];
            if(a[i]<=j){
                dp[i][j]=max(dp[i][j],dp[i-1][j-a[i]]+c[i]);
            }
        }
    }
    cout << dp[n][v] << endl;
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