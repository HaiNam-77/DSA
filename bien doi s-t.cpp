#include <bits/stdc++.h>
using namespace std;
bool vs[20000];
void solve(){
    int s,t;
    cin >> s >> t;
    queue <pair<long long,int>> q;
    q.push({s,0});
    vs[s]=true;
    memset(vs,false,sizeof(vs));
    while(!q.empty()){
        auto x = q.front();
        q.pop();
        if(x.first==t){
            cout << x.second << endl;
            return;
        }
        int s1 = x.first -1;
        if(s1 > 0 && !vs[s1]){
            q.push({s1,x.second+1});
            vs[s1]=true;
        }
        int s2 = x.first*2;
        if(s2 <= 20000 && !vs[s2]){
            q.push({s2,x.second+1});
            vs[s2]=true;
        }
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