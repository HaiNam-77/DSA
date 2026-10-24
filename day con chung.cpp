#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    vector <int> a(n),b(m),c(k);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    for(int i=0;i<k;i++){
        cin >> c[i];
    }
    vector <int> kq;
    int x=0,y=0,z=0;
    while(x < n && y<m && z<k){
        if(a[x]==b[y] && a[x]==c[z]){
            kq.push_back(a[x]);
            x++,y++,z++;
            continue;
        }

        if(a[x]<b[y]) x++;
        else if(b[y]<c[z]) y++;
        else z++;
    }
    if(kq.size()==0){
        cout << "NO";
        return;
    }
    for(int it : kq){
        cout << it << " ";
    }
    
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}