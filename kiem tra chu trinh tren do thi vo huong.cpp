#include <bits/stdc++.h>
using namespace std;
int n,m;
int parent[1005];
vector <pair<int,int>> ds;
void nhap(){
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin >> x >> y;
        ds.push_back({x,y});
    }
}
void make_set(){
    for(int i=1;i<=n;i++){
        parent[i]=i;
    }
}
int find(int a){
    if(parent[a]==a) return a;
    return parent[a]=find(parent[a]);
}
bool Union(int a,int b){
    a = find(a);
    b = find(b);
    if(a==b) return true;
    else{
        parent[a]=parent[b];
        return false;
    }
}
void ktra(){
    for(auto x : ds){
        int u = x.first;
        int v = x.second;
        if(Union(u,v)){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ds.clear();
        nhap();
        make_set();
        ktra();
    }
    return 0;
}