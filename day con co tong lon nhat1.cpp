#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,q;
    cin >> n >> q;
    vector <int> a(n+1);
    vector <int> dp(n+1,0);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[i]>0){
            dp[i]=dp[i-1] + a[i];
        }
        else dp[i]=dp[i-1];
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        int kq = dp[r]-dp[l-1];
        cout << kq << endl;
}
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}