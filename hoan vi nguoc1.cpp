#include <bits/stdc++.h>
using namespace std;
int n;
int a[1005];
bool used[1005];
void in(){
    for(int i=1;i<=n;i++){
        cout << a[i];
    }
    cout << " ";
}
void Try(int i){
    for(int j=n;j>=1;j--){
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
        cin >> n;
        Try(1);
        cout << endl;
    }
    return 0;
}