#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9+7;
long long lt(long long a,long long b){
    if(b==0) return 1;
    long long x = lt(a,b/2);
    if(b%2==1) return x*x*a;
    return x*x;
}
long long find(long long n,long long k){
    long long mid = lt(2,n-1);
    if(k==mid){
        return n;
    }
    else if(k<mid) return find(n-1,k);
    else return find(n-1,k-mid);
}
void solve(){
    long long n,k;
    cin >> n >> k;
     cout << find(n,k) << endl;
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