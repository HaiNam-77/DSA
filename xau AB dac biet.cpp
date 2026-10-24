#include <bits/stdc++.h>
using namespace std;
vector <string> v;
char c[105];
int n,k;
bool ktra(char c[]){
    int dem=0;
    for(int i=k;i<=n;i++){
        bool ok = true;
        for(int j=i-k+1;j<=i;j++){
            if(c[j]!='A'){
                ok = false;
                break;
            }
        }
        if(ok) dem++;
    }
    if(dem==1) return true;
    else return false;
}
void Try(int i){
    for(char j='A';j<='B';j++){
        c[i]=j;
        if(i==n){
            if(ktra(c)){
                string s="";
                for(int i=1;i<=n;i++){
                    s+= string(1,c[i]);
                }
                v.push_back(s);
            }
        }
        else Try(i+1);
    }
}
void solve(){
    cin >> n >> k;
    Try(1);
    cout << v.size() << endl;
    for(string it : v){
        cout << it << endl;
    }

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}