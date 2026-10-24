#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    stack <string> st;
    for(int i=0;i<s.size();i++){
        if(s[i]!=']') st.push(string(1,s[i]));
        else{
            string tmp="";
            while(st.top()!="["){
                string op = st.top();
                tmp+=op;
                st.pop();
            }
            st.pop();
            string str="";
            while(!st.empty() && isdigit(st.top()[0])){
                str = st.top() + str;
                st.pop();
            }
            long long cnt;
            if(str.empty()) cnt=1;
            else cnt = stoll(str);
            string tmp1="";
            for(int j=1;j<=cnt;j++){
                tmp1+=tmp;
            }
            st.push(tmp1);
        }
    }
    string kq ="";
    while(!st.empty()){
        kq+=st.top();
        st.pop();
    }
    reverse(kq.begin(),kq.end());
    cout << kq << endl;
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