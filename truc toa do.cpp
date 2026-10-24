#include <bits/stdc++.h>
using namespace std;
struct dt{
    int dau,cuoi;
};
bool cmp(dt a,dt b){
    if(a.cuoi != b.cuoi ) return a.cuoi < b.cuoi;
    return a.dau > b.dau;
}
void solve(){
    int n;
    cin >> n;
    vector <dt> ds(n);
    for(int i=0;i<n;i++){
        cin >> ds[i].dau >> ds[i].cuoi;
    }
    sort(ds.begin(),ds.end(),cmp);
    int dem=0,dodai=-1;
    for(auto x : ds){
        if(x.dau >= dodai){
            dem++;
            dodai = x.cuoi;
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
        solve();
    }
    return 0;
}