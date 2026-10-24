#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    queue <string> q;
    q.push("6");
    q.push("8");
    vector <string> v;
    while(q.front().size() <= n && !q.empty()){
        v.push_back(q.front());
        q.push(q.front()+"6");
        q.push(q.front()+"8");
        q.pop();
    }
    for(int i=v.size()-1;i>=0;i--){
        cout << v[i] << " ";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}