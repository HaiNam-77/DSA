#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    stack <int> st;
    for(int i=s.size();i>=0;i--){
        if(s[i]!='+' && s[i]!='-' && s[i]!='*' && s[i]!='/') st.push(s[i]-'0');
        else{
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            int tmp;
            if(s[i]=='+')  tmp= op1 + op2;
            else if(s[i]=='-') tmp=op1-op2;
            else if(s[i]=='*') tmp=op1*op2;
            else tmp=op1/op2;
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