#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;
    
    // Dùng vector và index t? 1 d? kh?p v?i logic toán h?c c?a b?n
    vector<int> a(k + 1);
    for (int i = 1; i <= k; i++) cin >> a[i];

    int i = k;
    // Tìm v? trí d?u tiên t? ph?i sang chua d?t giá tr? gi?i h?n n-k+i
    while (i > 0 && a[i] == n - k + i) {
        i--;
    }

    if (i <= 0) {
        // N?u là t? h?p cu?i cùng, in ra t? h?p d?u tiên
        for (int j = 1; j <= k; j++) cout << j << " ";
    } else {
        // Tang giá tr? t?i v? trí i lên 1
        a[i]++;
        // Các v? trí sau i s? là giá tr? t?i thi?u có th?
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
        for (int j = 1; j <= k; j++) cout << a[j] << " ";
    }
    cout << "\n";
}

int main() {
    // T?i uu t?c d? nh?p xu?t
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
