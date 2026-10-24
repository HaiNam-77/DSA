#include <bits/stdc++.h>
using namespace std;
int n;
vector <int> a;
vector <int> b;
void nhap(){
    cin >> n;
    a.resize(n+1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    b = a;
    sort(b.begin()+1,b.end());
}
void sapxep(){
    if(n%2!=0 && a[(n/2)+1]!=b[(n/2)+1]){
        cout << "No";
        return;
    }
    for(int i=(n/2);i>=1;i--){
        if(a[i]==b[i] && a[n-i+1]==b[n-i+1]) continue;
        else if(a[i]==b[n-i+1] && a[n-i+1]==b[i]) continue;
        else{
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        a.clear();
        b.clear();
        nhap();
        sapxep();
        cout << endl;
    }
    return 0;
}