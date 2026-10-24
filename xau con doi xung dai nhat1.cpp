#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    s = "x"+s;
    bool dp[n+1][n+1];
    for(int i=1;i<=n;i++) dp[i][i]=true;
    int kq = 1;
    for(int len = 2;len<=n;len++){
        for(int i=1;i<=n-len+1;i++){
            int j= i+len-1;
            if(len==2 && s[i]==s[j]) dp[i][j]=true;
            else{
                dp[i][j]= (dp[i+1][j-1] && (s[i]==s[j])); 
            }
            if(dp[i][j]) kq = max(kq,len);
        }
    }
    cout << kq<< endl;
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