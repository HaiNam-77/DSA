#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(k + 1);
    vector<bool> mark(n + 1, false); // Đánh dấu các phần tử ban đầu
    
    for (int i = 1; i <= k; i++) {
        cin >> a[i];
        mark[a[i]] = true; 
    }
    
    int i = k;
    // Tìm phần tử chưa chạm giới hạn
    while (i >= 1 && a[i] == n - k + i) i--;
    
    // Nếu i == 0 tức là cấu hình cuối cùng
    if (i == 0) {
        cout << k << "\n";
        return;
    }
    
    // Sinh cấu hình kế tiếp trực tiếp trên mảng a
    a[i]++;
    for (int j = i + 1; j <= k; j++) {
        a[j] = a[j - 1] + 1;
    }
    
    // Đếm số phần tử mới chưa được đánh dấu
    int dem = 0;
    for (int j = 1; j <= k; j++) {
        if (!mark[a[j]]) dem++;
    }
    
    cout << dem << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}