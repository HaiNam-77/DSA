#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    queue <string> q;
    q.push("9");
    while(stoll(q.front())%n!=0){
        q.push(q.front()+"0");
        q.push(q.front()+"9");
        q.pop();
    }
    cout << q.front() << endl;
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