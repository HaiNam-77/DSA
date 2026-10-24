#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int cnt=0;
        stack <char> st;
        for(char c : s){
            if(c==' ') continue;
            else if(c==')'){
                int ok=0;
                while(!st.empty()){
                    char x = st.top();
                    st.pop();
                    if(x=='+' || x=='-' || x=='*' || x=='/') ok=1;
                    if(x=='(') break;
                }
                if(ok==0){
                    cnt++;
                    break;
                }
            }
            else st.push(c);
        }
        if(cnt==1) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}