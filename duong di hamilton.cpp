#include <bits/stdc++.h>
using namespace std;
int n,m;
int mt[1005][1005];
bool vs[1005];
int path[1005];
bool ok;
void hamilton(int k){
    if(ok) return;
    if(k==n){
        ok=true;
        return ;
    }
    else{
        for(int v=1;v<=n;v++){
            if(!vs[v] && mt[path[k-1]][v]==1){
                path[k]=v;
                vs[v]=true;
                hamilton(k+1);
                vs[v]=false;
            }
        }
    }
}
void solve(){
    cin >> n >> m;
    memset(mt,0,sizeof(mt));
    memset(path,0,sizeof(path));
    ok=false;
    
    for(int i=1;i<=m;i++){
        int x,y;
        cin >> x >> y;
        mt[x][y]=1;
        mt[y][x]=1;
    }
    for(int i=1;i<=n;i++){
        memset(vs,false,sizeof(vs));
        path[0]=i;
        vs[i]=true;
        hamilton(1);
        if(ok) break;
        vs[i]=false;
    }
    if(!ok){
        cout << 0 << endl;
    }
    else{
        cout << 1 << endl;
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