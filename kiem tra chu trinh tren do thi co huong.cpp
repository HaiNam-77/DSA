#include <bits/stdc++.h>
using namespace std;
struct edge{
    int u,v;

};
vector <edge> ds;
 int n,m;
vector <int> parent(1005);
vector<int> sz(1005);
void make_set(){
    for(int i=1;i<=n;i++){
        parent[i]=i;
        sz[i]=1;
    }
}
int find(int a){
    if(a==parent[a]) return a;
    return parent[a]=find(parent[a]);
}
bool Union(int a,int b){
    a = parent[a];
    b=parent[b];
    if(a==b) return false;
    if(sz[a]<sz[b]) swap(a,b);
    sz[a]+=sz[b];
    parent[b]=parent[a];
    return true;
}
void solve(){
    cin >> n >> m;
    make_set();
    ds.clear();
    for(int i=1;i<=m;i++){
        int x,y;
        cin >> x >> y;
        ds.push_back({x,y});
    }
    bool ok=false;
    for(auto it : ds){
        int u=it.u;
        int v=it.v;
        if(!Union(u,v)){
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
        solve();
    }
    return 0;
}