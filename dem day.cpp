#include <bits/stdc++.h>
using namespace std;
const long long MOD = 123456789;
long long pow1(long long a,long long b){
    if(b==0) return 1;
    long long x = pow1(a,b/2);
    if(b%2==1) return ((x*x)%MOD * (a%MOD))%MOD;
    else return (x*x)%MOD;

}
void solve(){
    long long n;
    cin >> n;
    long long kq = pow1(2,n-1);
    cout << kq << endl;
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