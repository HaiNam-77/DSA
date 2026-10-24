#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    stack <int> st;
    while(q--){
        string s;
        cin >> s;
        if(s=="PUSH"){
            int x;
            cin >> x;
            st.push(x);
        }
        else if(s=="PRINT"){
            if(!st.empty()){
            int x = st.top();
            cout << x << endl;
            }
            else{
                cout << "NONE" << endl;
            }
        }
        else{
            if(!st.empty()){
                st.pop();
            }
            
        }
    }
    return 0;
}