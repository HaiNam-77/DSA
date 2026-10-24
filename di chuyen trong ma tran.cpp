#include <bits/stdc++.h>
using namespace std;
void solve(){
    int m,n;
    cin >> m >> n;
    int a[m+1][n+1];
    int dp[m+1][n+1];
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            dp[i][j]=-1;
        }
    }
    queue <pair<int,int>> q;
    q.push({1,1});
   dp[1][1]=0;
    while(!q.empty()){
        auto x = q.front();
        q.pop();
        int i = x.first;
        int j = x.second;
        int k = a[i][j];
        if(i==m && j==n){
            cout << dp[i][j] << endl;
            return;    
        }
        if(k==0) continue;
        if(dp[i][j+k]==-1 && j+k<=n){
            q.push({i,j+k});
            dp[i][j+k]=dp[i][j]+1;
        }

         if(dp[i+k][j]==-1 && i+k<=m){
            q.push({i+k,j});
            dp[i+k][j]=dp[i][j]+1;
        }

    }
    cout << -1 << endl;
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