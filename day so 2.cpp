#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> vt;

void in(){
    for(int i=vt.size()-1;i>=0;i--){
        cout << "[";
        for(int j=0;j<vt[i].size();j++){
            if(j==vt[i].size()-1) cout << vt[i][j] << "] ";
            else cout << vt[i][j] << " ";
        }
    }
}
void solve(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i=1;i<=n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    vt.push_back(v);
    while(v.size()>1){
        vector <int> v1;
        n = v.size();
        for(int i=0;i<n-1;i++){
            v1.push_back(v[i]+v[i+1]);
        }
        vt.push_back(v1);
        v.assign(v1.begin(),v1.end());
    }
    in();
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        vt.clear();
        solve();
        cout << endl;
    }
    return 0;
}