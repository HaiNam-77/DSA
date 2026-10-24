#include <bits/stdc++.h>
using namespace std;
struct job{
    int ma,dealine,profit;
};
bool cmp(job a,job b){
    if(a.profit != b.profit) return a.profit > b.profit;
    if(a.dealine != b.dealine) return a.dealine > b.dealine;
}

void solve(){
    int n;
    cin >> n;
    vector <job> ds(n);
    vector<bool> used(1005,false);
    for(int i=0;i<n;i++){
        cin >> ds[i].ma >> ds[i].dealine >> ds[i].profit;
    }
    sort(ds.begin(),ds.end(),cmp);
    int tg=0,dealine_max=0,profit_max=0;
    int dem=0;
    for(int i=0;i<n;i++){
        for(int j=ds[i].dealine;j>=1;j--){
            if(!used[j]){
                used[j]=true;
                profit_max+= ds[i].profit;
                dem++;
                break;
            }
        }
    }
    cout << dem << " " << profit_max << endl;
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