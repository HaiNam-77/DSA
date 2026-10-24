#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack <char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                if(!st.empty()){
                    if(st.top()=='(') st.pop();
                    else st.push(s[i]);
                }
                else st.push(s[i]);
            }
            else st.push(s[i]);
        }
        int mo=0,dong=0;
        while(!st.empty()){
            char c = st.top();
            st.pop();
            if(c=='(') mo++;
            else dong ++;
        }
        int kq = (dong/2) + (mo/2) + (mo%2)*2;
        cout << kq << endl;
    }
    return 0;
}