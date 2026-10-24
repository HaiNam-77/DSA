#include <bits/stdc++.h>
using namespace std;
int n,x;
int a[100];
vector <int> v;
set <vector<int>> se;
vector <vector<int>> vt;
void Try(int pos,int sum){
    if(sum==x){
        se.insert(v);
        return;
    }
    for(int j=pos;j<=n;j++){
        if(sum+a[j]<=x){
            v.push_back(a[j]);
            Try(j,sum+a[j]);
            v.pop_back();
        }
        else{
            break;
        }
    }

}


void print(){
    if(se.size()==0){
        cout << -1 ;
        return;
    }
    vt.assign(se.begin(),se.end());
    for(int i=0;i<vt.size();i++){
        cout << "[";
        for(int j=0;j<vt[i].size();j++){
            if(j==vt[i].size()-1) cout << vt[i][j] << "] ";
            else cout << vt[i][j] << " ";
        }
    }
}
void solve(){
    v.clear();
    se.clear();
    vt.clear();
    cin >> n >> x;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    Try(1,0);
    print();
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