#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <int> a(n+1);
    vector <int> dp(n+1,1);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int max_dp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                dp[i]=max(dp[i],dp[j]+1);
                if(dp[i]>max_dp) max_dp =dp[i];
            }
        }
    }
    cout << max_dp << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}