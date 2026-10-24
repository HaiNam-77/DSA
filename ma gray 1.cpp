#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <string> s;
    s.push_back("0");
    s.push_back("1");
    for(int i=2;i<=n;i++){
        int sz=s.size();
        for(int j=sz-1;j>=0;j--){
            s.push_back("1"+s[j]);
        }
        for(int j=0;j<sz;j++){
            s[j]= "0"+s[j];
        }
    }
    for(string c : s){
        cout << c << " ";
    }
    cout << endl;
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