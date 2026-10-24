#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    int sum=0;
    int sum_max=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
        if(sum > sum_max) sum_max = sum;
        if(sum <0) sum=0;
    }
    cout << sum_max << endl;
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