#include <bits/stdc++.h>
using namespace std;
vector <int> List[1005];
bool vs[1005];
int n,m;
void DFS(int u){
    vs[u]=true;
    for(int v : List[u]){
        if(!vs[v]){
            DFS(v);
        }
    }
}
int tplt(){
    int dem=0;
    for(int i=1;i<=n;i++){
        if(!vs[i]){
            dem++;
            DFS(i);
        }
    }
    return dem;
}
void solve(){
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
    int tplt1 = tplt();
    for(int i=1;i<=n;i++){
        memset(vs,false,sizeof(vs));
        vs[i]=true;
        int tplt2=tplt();
        if(tplt2 > tplt1){
            cout << i << " ";
        }
        vs[i]=false;
    }
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
        cout << endl;
    }
    return 0;
}