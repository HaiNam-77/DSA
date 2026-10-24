#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    stack <char> st;
    int dem=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(s[i]);
        else{
            if(!st.empty() && st.top()=='('){
                dem+=2;
                st.pop();
            }
        }
    }
    cout << dem << endl;
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