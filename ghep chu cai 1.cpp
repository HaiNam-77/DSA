#include <bits/stdc++.h>
using namespace std;
char c;
int n;
char s[100];
bool used[100]; 
bool ktra(int n,char a[]){
    for(int i=2;i<n;i++){
        if(a[i]=='A' && a[i-1]!='E' && a[i+1]!='E') return false;
        if(a[i]=='E' && a[i-1]!='A' && a[i+1]!='A') return false;
    }
    return true;
}
void Try(int i){
    for(char j = 'A';j<=c;j++){
        if(used[j]==false){
            s[i]=j;
            used[j]=true;
            if(i==n && ktra(n,s)){
                for(int i=1;i<=n;i++) cout << s[i];
                cout << endl;
            }
            else if(i<n) Try(i+1);
            used[j]=false; 
        }
    }
}
void solve(){
    cin >> c;
     n= c-'A'+1;
     Try(1);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}