#include <bits/stdc++.h>
using namespace std;

struct Point {
    long long x, y;
};

double dist(const Point& a, const Point& b) {
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

// Brute force cho tập nhỏ
double bruteForce(vector<Point>& pts, int l, int r) {
    double res = 1e18;
    for (int i = l; i <= r; i++)
        for (int j = i + 1; j <= r; j++)
            res = min(res, dist(pts[i], pts[j]));
    return res;
}

// Strip: kiểm tra các điểm trong dải width d quanh đường giữa
double stripClosest(vector<Point>& strip, double d) {
    double res = d;
    // Sắp xếp theo y
    sort(strip.begin(), strip.end(), [](const Point& a, const Point& b){
        return a.y < b.y;
    });
    int n = strip.size();
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n && (strip[j].y - strip[i].y) < res; j++)
            res = min(res, dist(strip[i], strip[j]));
    return res;
}

double closestRec(vector<Point>& pts, int l, int r) {
    if (r - l < 3)
        return bruteForce(pts, l, r);

    int mid = (l + r) / 2;
    long long midX = pts[mid].x;

    double d = min(closestRec(pts, l, mid), closestRec(pts, mid + 1, r));

    // Gom các điểm trong dải [-d, d] quanh đường giữa
    vector<Point> strip;
    for (int i = l; i <= r; i++)
        if (abs((double)(pts[i].x - midX)) < d)
            strip.push_back(pts[i]);

    return min(d, stripClosest(strip, d));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<Point> pts(n);
        for (int i = 0; i < n; i++)
            cin >> pts[i].x >> pts[i].y;

        if (n == 1) {
            // Chỉ 1 điểm - không có cặp nào
            cout << fixed << setprecision(6) << 0.0 << "\n";
            continue;
        }

        // Sắp xếp theo x (chia để trị yêu cầu)
        sort(pts.begin(), pts.end(), [](const Point& a, const Point& b){
            return a.x < b.x || (a.x == b.x && a.y < b.y);
        });

        double ans = closestRec(pts, 0, n - 1);
        cout << fixed << setprecision(6) << ans << "\n";
    }
    return 0;
}