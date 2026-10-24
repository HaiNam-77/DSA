#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a=0,b=0;
    for(int i=0;i<=n/4;i++){
        if((n-i*4)%7==0){
            a = i;
            b = (n-i*4)/7;
            break;
        }
    }
    if(a==0 && b==0){
        cout << -1 << endl;
        return;
    }
    for(int j=1;j<=a;j++) cout << 4;
    for(int i=1;i<=b;i++) cout << 7;
    
    cout << endl;
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