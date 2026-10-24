#include <bits/stdc++.h>
using namespace std;
int n;
int a[1005];
void in(){
    for(int i=1;i<=n;i++){
        cout << a[i];
    }
    cout << endl;
}
bool ktra1(){
    for(int i=1;i<=n-1;i++){
        if(a[i]==8 && a[i+1]==8) return false;
    }
    return true;
}
bool ktra2(){
    for(int i=1;i<=n-3;i++){
        if(a[i]==6 && a[i+1]==6 && a[i+2]==6 && a[i+3]==6) return false;
    }
    return true;
}
void Try(int i){
    for(int j=6;j<=8;j+=2){
        a[i]=j;
        if(i==n-1){
            if(ktra1() && ktra2()){
                in();
            }
        }
        else{
            Try(i+1);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    a[1]=8,a[n]=6;
    Try(2);
    return 0;
}