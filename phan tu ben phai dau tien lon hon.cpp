#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    vector <int> r(n,-1);
    stack <int> st;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++){
        if(st.empty()) st.push(i);
        else{
           while(!st.empty() && a[i] > a[st.top()]) {
                r[st.top()] = a[i];
                st.pop();
            }
    
            st.push(i);
        }
    }
    for(int i=0;i<n;i++){
        cout << r[i] << " ";
    }
    cout << endl;
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