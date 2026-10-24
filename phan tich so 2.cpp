#include <bits/stdc++.h>
using namespace std;
int a[100];
set <vector<int>,greater<vector<int>>> se;
int n;
void Try(int i){
    for(int j=n;j>=1;j--){
            a[i]=j;
            int sum=0;
             for(int z=1;z<=i;z++) sum+=a[z];
             if(sum==n){
                vector <int> v1;
                for(int z=1;z<=i;z++){
                    v1.push_back(a[z]);
                    sort(v1.begin(),v1.end(),greater<int>());
                }
                se.insert(v1);
             }
             else if(sum < n) Try(i+1);
        }
    }
void solve(){
    cin >> n;
    Try(1);
    cout << se.size() << endl;
    vector <vector<int>> v(se.begin(),se.end());
    for(int i=0;i<v.size();i++){
        cout << "(";
        for(int j=0;j<v[i].size();j++){
            if(j==v[i].size()-1) cout << v[i][j] << ") ";
            else cout << v[i][j] << " ";
        }
    }

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        memset(a,0,sizeof(a));
        se.clear();
        solve();
        cout << endl;
    }
    return 0;
}