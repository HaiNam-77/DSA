#include <bits/stdc++.h>
using namespace std;
struct edge{
    int u,v,w;
};
vector <edge> ds;
int n,m;
int parent[10005],sz[10005];
bool cmp(edge a,edge b){
    if(a.w!=b.w) return a.w < b.w;
    if(a.u != b.u) return a.u < b.u;
    return a.v < b.v;
}
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
    a = find(a);
    b = find(b);
    if(a==b) return false;
    if(sz[a]<sz[b]) swap(a,b);
    sz[a]+=sz[b];
    parent[b] = parent[a];
    return true;
}
void solve(){
    cin >> n >> m;
     make_set();
    for(int i=1;i<=m;i++){
        int x,y,z;
        cin >> x >> y >> z;
        ds.push_back({x,y,z});
    }
    sort(ds.begin(),ds.end(),cmp);
    int ck_min=0;
    for(auto it : ds){
        int u = it.u;
        int v=it.v;
        int w=it.w;
        if(Union(u,v)){
            ck_min+=w;
        }
    }
    cout << ck_min << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ds.clear();
        solve();
    }
    return 0;
}