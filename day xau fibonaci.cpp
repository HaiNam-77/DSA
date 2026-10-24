
#include <bits/stdc++.h>
using namespace std;
long long fb[100];
void ktao(){
    fb[1]=1,fb[2]=1;
    for(int i=3;i<=93;i++){
        fb[i]=fb[i-1]+fb[i-2];
    }
}
char find(long long n,long long k){
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(k <= fb[n-2]) return find(n-2,k);
    else return find(n-1,k-fb[n-2]);
    
}
void solve(){
    long long n,i;
    cin >> n >> i;
    cout << find(n,i) << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    ktao();
    while(t--){
        solve();
    }
    return 0;
}