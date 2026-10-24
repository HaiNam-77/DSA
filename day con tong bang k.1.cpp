#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100],b[100];
vector <vector<int>> vt;
void Try(int i){
    for(int j=b[i-1]+1;j<=n;j++){
            b[i]=j;
            if(i<=n){
                int tong=0;
                for(int z=1;z<=i;z++){
                    tong+= a[b[z]];
                }
                if(tong==k){
                    vector <int> v1;
                    for(int z=1;z<=i;z++){
                       v1.push_back(a[b[z]]);
                }
                vt.push_back(v1);
                }
                else if(tong<k){
                     Try(i+1);
                }
            }
            
        }
    }

void print(){
    if(vt.size()==0){
        cout << -1;
        return;
    }
    sort(vt.begin(),vt.end());
    for(int i=0;i<vt.size();i++){
        cout << "[";
        for(int j=0;j<vt[i].size();j++){
            if(j==vt[i].size()-1) cout << vt[i][j] << "] ";
            else cout << vt[i][j] << " ";
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        vt.clear();
        cin >> n >> k;
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        sort(a+1,a+n+1);
        Try(1);
        print();
        cout << endl;
    }
    return 0;
}