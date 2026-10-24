#include <bits/stdc++.h>
using namespace std;
vector <long long> bdn;
void ktao(){
    queue <long long> q;
    q.push(1);
    while(q.front() <= 1e18){
        bdn.push_back(q.front());
        q.push(q.front()*10);
        q.push(q.front()*10+1);
        q.pop();
    }
}
void solve(){
    long long n;
    cin >> n;
    int dem=0;
    for(int i=0;i<bdn.size();i++){
        if(bdn[i]<=n) dem++;
        else break;
    }
    cout << dem << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    ktao();
    while(t--){
        solve();
    }
    return 0;
}