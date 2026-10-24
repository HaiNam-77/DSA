#include <bits/stdc++.h>
using namespace std;
int n;
int a[100][100];
string s="";
int dem=0;
void Try(int i,int j){
    if(i==n && j==n){
        dem++;
        cout << s << " ";
    }
     if(i<n && a[i+1][j]==1){
        s+="D";
        a[i+1][j]=0;
        Try(i+1,j);
        a[i+1][j]=1;
        s.pop_back();
     }
     if(j<n && a[i][j+1]==1){
        s+="R";
        a[i][j+1]=0;
        Try(i,j+1);
        a[i][j+1]=1;
        s.pop_back();
     }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        dem=0;
        s="";
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin >> a[i][j];
            }
        }
        if(a[1][1]==0 || a[n][n]==0){
            cout << -1 << endl;
            continue;
        }
        Try(1,1);
        if(dem==0){
            cout << -1 << endl;
        }
        cout << endl;
    }
    return 0;
}