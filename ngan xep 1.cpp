#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    vector <int> st;
    while(cin >> s){
        if(s=="push"){
            int x ;
            cin >> x;
            st.push_back(x);
        }
        else if(s=="pop"){
            st.pop_back();
        }
        else{
            if(!st.empty()){
                for(int i=0;i<st.size();i++){
                    cout << st[i] << " ";
                }
                cout << endl;
            }
            else{
                cout << "empty" << endl;
            }
        }
    }
    return 0;
}