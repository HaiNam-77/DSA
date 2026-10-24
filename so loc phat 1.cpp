#include <bits/stdc++.h>
using namespace std;
vector <string> locphat;
void ktao(){
    queue <string> q;
    q.push("6");
    q.push("8");
    while(q.front().size()<=15){
        locphat.push_back(q.front());
        q.push(q.front()+"6");
        q.push(q.front()+"8");
        q.pop();
    }
}
void solve(){
    int n;
    cin >> n;
    for(int i=locphat.size()-1;i>=0;i--){
        if(locphat[i].size()<=n) cout << locphat[i] << " ";
    }
    cout << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    ktao();
    while(t--){
        solve();
    }
    return 0;
}