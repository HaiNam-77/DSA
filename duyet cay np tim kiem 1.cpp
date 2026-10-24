#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Bi?n toàn c?c ð? theo d?i v? trí hi?n t?i trong m?ng Preorder
int preIndex = 0;

void getPostOrder(const vector<int>& pre, int n, int min_val, int max_val) {
    // K?ch b?n d?ng: n?u ð? duy?t h?t m?ng
    if (preIndex >= n) return;

    // N?u giá tr? hi?n t?i không n?m trong kho?ng h?p l? c?a cây con, quay lui
    if (pre[preIndex] < min_val || pre[preIndex] > max_val) {
        return;
    }

    // Ghi nh?n node g?c c?a nhánh hi?n t?i và di chuy?n index t?i node ti?p theo
    int val = pre[preIndex];
    preIndex++;

    // Xây d?ng/duy?t cây con trái (các ph?n t? ph?i nh? hõn giá tr? g?c hi?n t?i)
    getPostOrder(pre, n, min_val, val);

    // Xây d?ng/duy?t cây con ph?i (các ph?n t? ph?i l?n hõn giá tr? g?c hi?n t?i)
    getPostOrder(pre, n, val, max_val);

    // In ra ph?n t? theo th? t? Postorder (Trái -> Ph?i -> G?c)
    cout << val << " ";
}

void solve() {
    int n;
    cin >> n;
    vector<int> pre(n);
    for (int i = 0; i < n; ++i) {
        cin >> pre[i];
    }

    // Reset l?i v? trí index cho m?i test case m?i
    preIndex = 0; 
    
    // G?i hàm v?i d?i giá tr? t? vô cùng bé ð?n vô cùng l?n
    getPostOrder(pre, n, INT_MIN, INT_MAX);
    cout << "\n";
}

int main() {
    // T?i ýu hóa I/O trong C++ giúp ð?c/ghi nhanh hõn v?i d? li?u l?n
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
