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
        stack <string> st;
        stringstream ss(s);
        string w;
        while(ss >> w){
            st.push(w);
        }
        while(!st.empty()){
            string x = st.top();
            st.pop();
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}