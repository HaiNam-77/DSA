#include <bits/stdc++.h>
using namespace std;
long long cnt[10000];
void solve(){
    long long k;
    cin >> k;
    string s;
    cin >> s;
    priority_queue <long long> se;
    for(int i=0;i<s.size();i++) cnt[s[i]]++;
    for(int i=0;i<s.size();i++){
        if(cnt[s[i]]!=0){
            se.push(cnt[s[i]]);
            cnt[s[i]]=0;
        }
    }
    for(int i=1;i<=k;i++){
        if(se.empty()){
            cout << 0 << endl;
            return;
        }
        int op = se.top();
        se.pop();
        op-=1;
        if(op>0) se.push(op);
    }
    long long gtri=0;
    while(!se.empty()){
        long long x = se.top();
        se.pop();
        gtri+=(x*x);
    }
    cout << gtri << endl;
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