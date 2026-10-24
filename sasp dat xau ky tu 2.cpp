#include <bits/stdc++.h>
using namespace std;
int d;
string s;
void solve(){
    cin >> d >> s;
    int max1 = -1;
    int cnt_max=0;
    vector <int> cnt(256,0);
    for(int i=0;i<s.size();i++){
        cnt[s[i]]++;
        if(cnt[s[i]]> max1) max1 = cnt[s[i]];
    }
    for(int i=0;i<s.size();i++){
        if(cnt[s[i]]==max1){
            cnt[s[i]]=0;
             cnt_max++;
        }
    }
    if(s.size()>=(max1-1)*d + cnt_max) cout << 1 << endl;
    else cout << -1 << endl;
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