#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    multiset <long long> se;
    for(int i=1;i<=n;i++){
        int x;
        cin >> x;
        se.insert(x);
    }
    vector <long long> cost;
    while(se.size()>=2){
        long long op1 = *se.begin();
        se.erase(se.begin());
        long long op2 = *se.begin();
        se.erase(se.begin());
        long long tmp = (op1+op2)%mod;
        se.insert(tmp);
        cost.push_back(tmp);
    }
    long long sum_cost=0;
    for(long long x:cost){
        sum_cost+=x;
        sum_cost%=mod;
    }
    cout << sum_cost<< endl;
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