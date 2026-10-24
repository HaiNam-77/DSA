#include <bits/stdc++.h>
using namespace std;
vector <int> List[1005];
bool vs[1005];
void DFS(int u){
    vs[u]=true;
    for(int v : List[u]){
        if(!vs[v]){
            DFS(v);
        }
    }
}

void solve(){
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin >> x >> y;
        List[x].push_back(y);
    }`
    for(int i=1;i<=n;i++){
        memset(vs,false,sizeof(vs));
        DFS(i);
        for(int j=1;j<=n;j++){
            if(!vs[j]){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        for(int i=0;i<1005;i++) List[i].clear();
       memset(vs,false,sizeof(vs));
        solve();
    }
    return 0;
}