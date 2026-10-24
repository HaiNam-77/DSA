#include <bits/stdc++.h>
using namespace std;
int n;
int a[100];
int b[100];
vector <vector<int>> v;
void Try(int i){
    for(int j=b[i-1]+1;j<=n;j++){
        b[i]=j;
        if(i<=n){
            int sum=0;
            for(int z=1;z<=i;z++) sum+=a[b[z]];
            if(sum%2!=0){
                vector <int> v1;
                for(int z=1;z<=i;z++){
                    v1.push_back(a[b[z]]);
                }
                v.push_back(v1);
            }
        }
        if(i<n) Try(i+1);
    }
}
void solve(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1,greater<int>());
    Try(1);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        for(int it : v[i]){
            cout << it << " ";
        }
        cout << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        v.clear();
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        solve();
    }
    return 0;
}