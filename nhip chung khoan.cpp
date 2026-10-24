#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    stack <int> st;
    vector <int> dp(n,1);
    for(int i=0;i<n;i++){
        while(!st.empty() && a[i]>=a[st.top()]){
            dp[i]+=dp[st.top()];
            st.pop();
        }
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout << dp[i] << " ";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}