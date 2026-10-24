#include <bits/stdc++.h>
using namespace std;
int n,m;
vector <int> List[1005];
bool vs[1005];
int deg[1005];
void nhap(){
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin >> x >> y;
        deg[x]++,deg[y]++;
        List[x].push_back(y);
    }
}
void DFS(int u){
    vs[u]=true;
    for(int v : List[u]){
        if(!vs[v]){
            DFS(v);
        }
    }
}
int bac(){
    int dem=0;
    for(int i=1;i<=n;i++){
        if(deg[i]%2!=0) dem++;
    }
    if(dem==2) return 1;
    else if(dem==0) return 2;
    else return 0;
}

void euler(){
        if(bac()==1) cout << 1 << endl;
        else if(bac()==2) cout << 2 << endl;
        else cout << 0 << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        memset(vs,false,sizeof(vs));
        for(int i=0;i<1005;i++) List[i].clear();
        memset(deg,0,sizeof(deg));
        nhap();
        euler();
    }
    return 0;
}