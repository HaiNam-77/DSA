#include <bits/stdc++.h>
using namespace std;
long long find(long long n,long long x,vector<long long> a){
    long long l=0,r=n-1;
    long long floor=-1;
    long long max_x=-1e18;
    int mid =(l+r)/2;
    while(l<=r){
        long long mid =(l+r)/2;
        if(a[mid]==x) return mid;
        else if(a[mid]>x){
            r = mid-1;
        }
        else{
            if(a[mid]>max_x){
                max_x = a[mid];
                floor = mid;
            }
            l = mid+1;
        }
    }
    return floor;
}
void solve(){
    long long n,x;
    cin >> n >> x;
    vector <long long> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
     long long kq = find(n,x,a);
     if(kq==-1){
        cout << -1 << endl;
        return;
     }
     cout << kq+1 << endl;
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