#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    queue <pair<string,int>> q;
    q.push({"1",1%n});
    while(!q.empty()){
        string s = q.front().first;
        int mod = q.front().second;

        if(mod == 0){
            cout << s << endl;
            return;
        }

        int mod0 = (mod*10)%n;
        q.push({s+"0",mod0});

        int mod1 = (mod*10+1)%n;
        q.push({s+"1",mod1});

        q.pop();
    }
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