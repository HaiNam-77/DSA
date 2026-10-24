#include<bits/stdc++.h>
using namespace std;
int chuaxet[1005];
vector<pair<int, int>> adj[1005];
int n,m;
void nhap(){
    cin >> n >>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x; cin >> x;
            if(x!=0 && x!=10000){
                adj[i].push_back({j,x});
            }
        }
    }
}

void prim(int u){
    chuaxet[u]=1;
    int d=0;
    int dem=1;
    vector<tuple<int,int,int>> in;
    while(dem <n){
        int min_w=1e9;
        int x,y;
        for(int i=1;i<=n;i++){
            if(chuaxet[i]==1){
                for(auto it : adj[i]){
                    int j= it.first, w=it.second;
					if(chuaxet[j]==0 && w < min_w){
                        x=i;y=j;
                        min_w=w;
                    }
                }
            }
        }
        chuaxet[y]=1;
        dem++;
        d+=min_w;
        in.push_back({min(x,y), max(x,y), min_w});
    }
    if(dem!=n){
        cout <<"0\n";
    }
    else{
        cout << d<<"\n";
        for(auto&[i,j,w] : in){
            cout << i<<" " <<j <<" " <<w <<"\n";
        }
    }
}

int main(){
    nhap();
    prim(m);
}

