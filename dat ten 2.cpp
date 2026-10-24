#include <bits/stdc++.h>
using namespace std;
int n,k;
vector <string> v;
map <string,int> mp;
bool used[1005];
int a[1005];
void in(){
    for(int i=1;i<=k;i++){
        cout << v[a[i]-1] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j =a[i-1]+1;j<=n-k+i;j++){
        if(!used[j]){
            a[i]=j;
            used[j]=true;
            if(i==k){
                in();
            }
            else Try(i+1);
            used[j]=false;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        string s;
        cin >> s;
        if(mp[s]==0){
            v.push_back(s);
            mp[s]++;
        }
    }
    n = v.size();
    sort(v.begin(),v.end());
    Try(1);
    return 0;
}