#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x;
    cin >> x;
    string a;
    cin >> a;
    int n = a.size()-1;
    int i = n-1;
    while(i>=0 && a[i]>=a[i+1]) i--;
    if(i==-1){
        cout << x << " " << "BIGGEST" << endl;
    }
    else{
        int j = n;
        while(a[j]<=a[i]) j--;
        swap(a[j],a[i]); 
        int l=i+1,r=n;
        while(l<=r){
            swap(a[l],a[r]);
            l++,r--;
        }
        cout << x << " " << a << endl;
    }

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();

    }
    return 0;
}