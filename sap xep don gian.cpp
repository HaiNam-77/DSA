#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >>n;
    vector <int> dp(n+1,0);
    int max_len =-1;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        dp[x]=dp[x-1]+1;
        max_len=max(max_len,dp[x]);
    }
    cout << n - max_len << endl;
    
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}