#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    vector <int> a(k+1);
   vector<bool> vs(n + 1, false);
    for(int i=1;i<=k;i++){
        cin >> a[i];
        vs[a[i]]=true;
    }
    int i=k;
    while(i>=1 && a[i]==n-k+i) i--;
    if(i==0){
        cout << k << endl;
        return;
    }
    else a[i]++;
    for(int j=i+1;j<=k;j++){
        a[j]=a[j-1]+1;
    }
    int dem=0;
    for(int j=1;j<=k;j++){
        if(!vs[a[j]]) dem++;
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