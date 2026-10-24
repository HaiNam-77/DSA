#include <bits/stdc++.h>
using namespace std;
void solve(){
    int s,d;
    cin >> s >> d;
    if(d*9 < s){
        cout << -1 << endl;
        return;
    }
    string so="";
    while(s!=0 && d!=0){
        for(int i=0;i<=9;i++){
            if(so.size()==0 && i==0) continue;
            if(s-i <= (d-1)*9){
                so+= to_string(i);
                s-=i;
                d--;
                break;
            }
        }
    }
    cout << so << endl;
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