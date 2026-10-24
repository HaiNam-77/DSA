#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    stack <int> st;
    stack <int> st1;
    vector <int> idx(n);
    vector <int> val(n);
    for(int i=n-1;i>=0;i--){
        if(st.empty()) idx[i]=-1;
        else{
            while(!st.empty() && a[st.top()] <= a[i]) st.pop();
            if(st.empty()) idx[i]=-1;
            else idx[i]=st.top();
        }
        st.push(i);
    } 
    for(int i=n-1;i>=0;i--){
        if(st1.empty()) val[i]=-1;
        else{
            while(!st1.empty() && st1.top() >= a[i]) st1.pop();
            if(st1.empty()) val[i]=-1;
            else val[i]=st1.top();
        }
        st1.push(a[i]);
    }
    for(int i=0;i<n;i++){
        if(idx[i]==-1) cout << -1 << " ";
        else cout << val[idx[i]] << " ";
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