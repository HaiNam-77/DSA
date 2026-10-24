#include <bits/stdc++.h>
using namespace std;
vector <int> List[1005];
bool vs[1005];
void ktao(){
    memset(vs,false,sizeof(vs));
    for(int i=0;i<1005;i++) List[i].clear();
}
bool DFS(int u,int par){
    vs[u]=true;
    for(int v : List[u]){
        if(!vs[v]){
            if(DFS(v,u)) return true;
        }
        else if(v!=par){
            return true;
        }
    }
    return false;
}
void solve(){
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
    bool ok=false;
    for(int i=1;i<=n;i++){
        if(!vs[i]&&DFS(i,0)){
            ok=true;
            break;
        }
    }
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ktao();
        solve();
    }
    return 0;
}