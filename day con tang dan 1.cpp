#include <bits/stdc++.h>
using namespace std;
int a[100];
int b[100];
int n;
vector <string> v;
void Try(int i,int pos){
    for(int j=pos;j<=n;j++){
        if(i==1 || a[j] > b[i-1]){
            b[i]=a[j];
            if(i>=2 && i<=n){
                string x="";
                for(int z=1;z<=i;z++) x = x+ to_string(b[z])+" ";
                v.push_back(x);
            }
            if(i<n) Try(i+1,j+1);
        }
    }
}
void solve(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    Try(1,1);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}