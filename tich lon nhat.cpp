#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    long long tich_max=-1e9;
    if(a[0]*a[1]>tich_max) tich_max=a[0]*a[1];
     if(a[n-1]*a[n-2]>tich_max) tich_max = a[n-1]*a[n-2];
     if(a[0]*a[n-2]*a[n-1]>tich_max) tich_max = a[0]*a[n-2]*a[n-1];
     if(a[0]*a[1]*a[2]>tich_max) tich_max = a[0]*a[1]*a[2];

    cout << tich_max << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
     solve();

    return 0;
}