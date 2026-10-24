#include <bits/stdc++.h>
using namespace std;
char c;
int n;
char s[1005];
void Try(int i){
    for(char j=s[i-1];j<=c;j++){
        s[i]=j;
        if(i==n){
            for(int z=1;z<=n;z++) cout << s[z]; 
            cout << endl;
        }
        else Try(i+1);
    }
}
void solve(){
    cin >> c >> n;
    s[0]='A';
    Try(1);

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}