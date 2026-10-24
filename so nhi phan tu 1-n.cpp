#include <bits/stdc++.h>
using namespace std;
vector <string> np;
void ktao(){
    queue <string> q;
    q.push("1");
    while(np.size()<10000){
    np.push_back(q.front());
    q.push(q.front()+"0");
    q.push(q.front()+"1");
    q.pop();
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    ktao();
    while(t--){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            cout << np[i] << " ";
        }
        cout << endl;
    }
    return 0;
}