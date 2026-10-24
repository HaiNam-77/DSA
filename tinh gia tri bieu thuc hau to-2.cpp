#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <string> s(n);
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    stack <long long> st;
    for(int i=0;i<n;i++){
         if(s[i]!="+" && s[i]!="–" && s[i]!="-"  && s[i]!="*" && s[i]!="/") st.push(stoll(s[i]));
         else{
            long long op1 = st.top();
            st.pop();
            long long op2 = st.top();
            st.pop();
            long long tmp;
            if(s[i]=="+")  tmp= op1 + op2;
            else if(s[i]=="–" || s[i]=="-") tmp=op2-op1;
            else if(s[i]=="*") tmp=op1*op2;
            else{
                if(op1==0) return;
                tmp=op2/op1;
            }
            st.push(tmp);
         }
    }
    if(!st.empty()) {
        cout << st.top() << "\n";
    }
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