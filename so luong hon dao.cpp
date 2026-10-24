#include <bits/stdc++.h>
using namespace std;
int n,m;
vector <int> List[1005];
bool vs[1005];
void nhap(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int x;
            cin >> x;
            if(x==1) List[i].push_back(j);
        }
    }
}
void DFS(int u){
    vs[u]=true;
    for(int v : List[u]){
        if(!vs[v]) DFS(v);
    }
}
void tplt(){
    int dem=0;
    for(int i=1;i<=n;i++){
        if(!vs[i]){
            dem++;
            DFS(i);
        }
    }
    cout << dem << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        memset(vs,false,sizeof(vs));
        for(int i=0;i<1005;i++) List[i].clear();
        nhap();
        tplt();
    }
    return 0;
}