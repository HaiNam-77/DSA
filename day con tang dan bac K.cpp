#include <bits/stdc++.h>
using namespace std;
int a[100];
int b[100];
 int n,k,dem;
bool ktra(int k,int a[],int b[]){
    for(int i=1;i<k;i++){
        if(a[b[i]]>a[b[i+1]]) return false;
    }
    return true;
}
void Try(int i){
    for(int j=b[i-1]+1;j<=n-k+i;j++){
        b[i]=j;
        if(i==k){
            if(ktra(k,a,b)){
                dem++;
            }
        }
        else Try(i+1);
    }
}
void solve(){
    cin >> n >> k;
    dem=0;
    for(int i=1;i<=n;i++) cin >> a[i];
    Try(1);
    cout << dem << endl;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}