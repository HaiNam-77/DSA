#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[1000];
int dem = 0;
int x[1000]; // Ch? c?n dùng m?ng thu?ng là d? vì dã có i qu?n lý d? dài
long long sum = 0;

void Try(int i, int pos) {
    for (int z = pos; z <= n; z++) {
        sum += a[z];
        x[i] = a[z];
        
        if (sum == k) {
            dem++;
            for (int l = 1; l <= i; l++) {
                cout << x[l] << " ";
            }
            cout << endl;
        } 
        else if (sum < k) {
            Try(i + 1, z + 1); // G?i d? quy xét ph?n t? ti?p theo
        }
        
        // Quay lui (backtracking) - Ph?c h?i l?i tr?ng thái t?ng
        sum -= a[z];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    sort(a + 1, a + n + 1);
    
    Try(1, 1);
    
    // In ra t?ng s? lu?ng dãy con tìm du?c
    // cout << dem << endl; 
}
