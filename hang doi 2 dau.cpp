#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    deque <int> q;
    while(t--){
        string s;
        cin >> s;
        if(s=="PUSHFRONT"){
            int x;
            cin >> x;
            q.push_front(x);
        }
        else if(s=="PRINTFRONT"){
            if(!q.empty()){
                cout << q.front() << endl;
            }
            else cout << "NONE" << endl;
        }
        else if(s=="POPFRONT"){
            if(!q.empty()){
               q.pop_front();
            }
        }
        else if(s=="PUSHBACK"){
            int x;
            cin >> x;
            q.push_back(x);
        }
        else if(s=="PRINTBACK"){
            if(!q.empty()){
                cout << q.back() << endl;
            }
            else cout << "NONE" << endl;
        }
        else{
            if(!q.empty()){
               q.pop_back();
            }
        }
    }
    return 0;
}