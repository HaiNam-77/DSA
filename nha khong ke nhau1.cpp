#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <int> a(n+1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    vector <long long> dp(n+1);
    dp[0]=0,dp[1]=a[1];
    for(int i=2;i<=n;i++){
        dp[i]=max(dp[i-1],dp[i-2]+a[i]);
    }
    cout << dp[n] << endl;
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