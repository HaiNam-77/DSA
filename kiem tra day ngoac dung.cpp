#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    stack <char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
        else{
            if(st.empty()){
                cout << "NO" << endl;
                return;
            }
             char top = st.top();
             st.pop();
             if ((s[i] == ')' && top != '(') || 
                (s[i] == ']' && top != '[') || 
                (s[i] == '}' && top != '{')) {
                cout << "NO\n";
                return;
        }

    }
}
cout << "YES" << endl;
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