#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    queue <int> q;
    while(t--){
        string s;
        cin >> s;
        if(s=="PUSH"){
            int x;
            cin >> x;
            q.push(x);
        }
        else if(s=="PRINTFRONT"){
            if(!q.empty()){
                cout << q.front() << endl;
            }
            else cout << "NONE" << endl;
        }
        else{
            if(!q.empty()){
                q.pop();
            }
        }
    }
    return 0;
}