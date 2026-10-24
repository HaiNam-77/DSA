#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    stack<long long> st;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])) st.push(s[i]-'0');
        else{
            int op1 = st.top();
            st.pop();
            int op2 =st.top();
            st.pop();
            long long tmp;
            if(s[i]=='+') tmp = op1+op2;
            if(s[i]=='-') tmp = op2 - op1;
            if(s[i]=='*') tmp = op1*op2;
            if(s[i]=='/') tmp = op2/op1;
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