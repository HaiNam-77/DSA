#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    stack <string> st;
    for(int i=0;i<s.size();i++){
        if(s[i]!=')') st.push(string(1,s[i]));
        else{
            string op1 = st.top();
            st.pop();
            string dau = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            st.pop();
            string tmp = op2 + op1 + dau;
            st.push(tmp);
        }
    }
    cout << st.top() << endl;
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