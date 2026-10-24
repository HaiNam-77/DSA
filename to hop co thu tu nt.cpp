#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1005];
bool used[1005];
int dem=0;
bool nt(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
void in(){
    cout << dem << ": ";
    for(int i=1;i<=k;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j=a[i-1]+1;j<= n-k+i;j++){
        if(!used[j]){
            a[i]=j;
            used[j]=true;
            if(i==k){
                dem++;
                if(nt(dem)){
                    in();
                }
            }
            else Try(i+1);
            used[j]=false;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    Try(1);
    return 0;
}