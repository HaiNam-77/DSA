#include <bits/stdc++.h>
using namespace std;
string s;
bool used[1005];
int a[1005];
int n;
void in(){
    for(int i=1;i<=n;i++){
        cout << s[a[i]-1];
    }
    cout << " ";
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!used[j]){
            a[i]=j;
            used[j]=true;
            if(i==n){
                in();
            }
            else Try(i+1);
            used[j]=false;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        n=s.size();
        Try(1);
        cout << endl;
    }
    return 0;
}