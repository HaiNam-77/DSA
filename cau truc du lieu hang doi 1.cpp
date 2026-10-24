#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
         queue <int> Q;
        while(n--){
            int x;
            cin >> x;
           
            if(x==1){
                cout << Q.size() << endl;
            }
            else if(x==2){
                if(!Q.empty()) cout << "NO" << endl;
                else cout << "YES" << endl;
            }
            else if(x==3){
                int y;
                cin >> y;
                Q.push(y);
            }
            else if(x==4){
                if(!Q.empty()) Q.pop();
            }
            else if(x==5){
                if(!Q.empty()){
                    cout << Q.front() << endl;
                }
                else cout << -1 << endl;
            }
            else{
                if(!Q.empty()){
                    cout << Q.back() << endl;
                }
                else cout << -1 << endl;
            }
        }
    }
    return 0;
}