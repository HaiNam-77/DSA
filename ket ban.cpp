#include <bits/stdc++.h>
using namespace std;
struct edge{
    int u,v;
};
vector <edge> ds;
vector <int> parent(100005);
vector <int> sz(100005);
int n,m;
void make_set(){
    for(int i=1;i<=n;i++){
        parent[i]=i;
        sz[i]=1;
    }
}
int find(int a){
    if(a== parent[a]) return a;
    return parent[a]=find(parent[a]);
}
void Union(int a,int b){
    a = find(a);
    b = find(b);
    if(a!=b){
        if(sz[a]<sz[b]) swap(a,b);
        sz[a]+=sz[b];
        parent[b]=parent[a];
    }
}
void solve(){
    cin >> n >> m;
    make_set();
    for(int i=1;i<=m;i++){
        int x,y;
        cin >> x >> y;
        Union(x,y);
    }
    int max1 = -1e9;
    for(int i=1;i<=n;i++){
        if(sz[i]>max1) max1 = sz[i];
    }
    cout << max1 << endl;
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