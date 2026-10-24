#include <bits/stdc++.h>
using namespace std;
int n;
int a[1005];
bool used[1005];
int dem=0;
void in(){
    cout << dem << ": ";
    for(int i=1;i<=n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!used[j]){
            a[i]=j;
            used[j]=true;
            if(i==n){
                dem++;
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
    cin >> n;
    Try(1);
    return 0;
}