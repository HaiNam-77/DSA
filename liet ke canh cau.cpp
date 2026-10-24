#include <bits/stdc++.h>
using namespace std;
int n,m;
vector <pair<int,int>> ds;
vector <int> List[1005];
bool vs[1005];
void nhap(){
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
        ds.push_back({x,y});
    }
}
void DFS(int u,int s,int t){
    vs[u]=true;
    for(int v : List[u]){
        if((u==s && v==t)||(u==t && v==s)) continue;
        if(!vs[v]) DFS(v,s,t);
    }
}
void canhcau(){
    for(auto it: ds){
         memset(vs,false,sizeof(vs));
        int s= it.first;
        int t = it.second;
        int dem=0;
        for(int i=1;i<=n;i++){
            if(!vs[i]){
                dem++;
                DFS(i,s,t);
            }
        }
        if(dem > 1){
            cout << s << " " << t << " ";
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        for(int i=0;i<1005;i++) List[i].clear();
        ds.clear();
        nhap();
        canhcau();

    }
    return 0;
}