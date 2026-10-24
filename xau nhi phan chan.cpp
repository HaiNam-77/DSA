#include<bits/stdc++.h>
using namespace std;

int n, a[100], ok = 0;
void in() {
    for(int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void sinh() {
    int i = n;
    while(i >= 1 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if(i == 0) {
        ok = 1;
    } else {
        a[i] = 1;
    }
}

bool check() {
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(a[i] == 1) cnt++;
    }
    return cnt % 2 == 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++) a[i] = 0;
    while(!ok) {
        if(check()) {
            in();
        }
        sinh();
    }
    return 0;
}
