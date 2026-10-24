#include <iostream>
#include <vector>
#include <set> // Thu vi?n ch?a multiset

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    if (!(cin >> n >> m >> k)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    multiset<int> window;
    bool found = false;

    for (int i = 0; i < n; ++i) {
        
        window.insert(a[i]);

        
        if (i >= m) {
            
            window.erase(window.find(a[i - m]));
        }

        
        if (i >= m - 1) {
            int current_min = *window.begin();  // S? nh? nh?t n?m ? d?u
            int current_max = *window.rbegin(); // S? l?n nh?t n?m ? cu?i

            
            if (current_max - current_min <= k) {
                cout << (i - m + 2) << "\n";
                found = true;
            }
        }
    }

    if (!found) {
        cout << "NONE\n";
    }

    return 0;
}
