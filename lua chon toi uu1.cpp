#include <bits/stdc++.h>
using namespace std;
struct Time{
    int start,end;
};
 bool cmp(Time a,Time b){
    if(a.end!=b.end) return a.end < b.end;
    return a.start > b.start;
 }
 void choose(){
    int n;
    cin >> n;
    vector <Time> cv(n);
    for(int i=0;i<n;i++){
        cin >> cv[i].start >> cv[i].end;
    }
    sort(cv.begin(),cv.end(),cmp);
    int tg=cv[0].end;
    int dem=1;
    for(int i=1;i<n;i++){
        if(cv[i].start >= tg){
            dem++;
            tg = cv[i].end;
        }
    }
    cout << dem << endl;
 }
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        choose();
    }
    return 0;
}