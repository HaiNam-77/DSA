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
    stack <int> r;
    for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=a[i]){
                 st.pop();
            }
            if(st.empty()) r.push(-1);
            else r.push(st.top());
            st.push(a[i]);
        }
    
    while(!r.empty()){
        cout << r.top() << " ";
        r.pop();
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