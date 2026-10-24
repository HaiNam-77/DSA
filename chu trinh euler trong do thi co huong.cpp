#include <bits/stdc++.h>
using namespace std;
int deg_out[1005],deg_in[1005];
void solve(){
    int n,m;
    cin >> n >> m;
    memset(deg_in,0,sizeof(deg_in));
    memset(deg_out,0,sizeof(deg_out));
    for(int i=1;i<=m;i++){
        int x,y;
        cin >> x >> y;
        deg_out[x]++;
        deg_in[y]++;
    }
    for(int i=1;i<=n;i++){
        if(deg_in[i]!=deg_out[i]){
            cout << 0 << endl;
            return;
        }
    }
    cout << 1 << endl;
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