#include<bits/stdc++.h>
using namespace std;

int n;
int c[20][20];
int a[20], xopt[20];
int b[20];
int fopt = 1e9;
int cmin = 1e9;
int cost = 0;

void Try(int i){
    for(int j = 2; j <= n; j++){
        if(b[j] == 0){
            a[i] = j;
            b[j] = 1;
            cost += c[a[i-1]][a[i]];
            if(i == n){
                int total = cost + c[a[n]][1];
                if(total < fopt){
                    fopt = total;
                    for(int k = 1; k <= n; k++)
                        xopt[k] = a[k];
                }
            }
            else if(cost + (n - i + 1) * cmin < fopt)
                Try(i + 1);

            cost -= c[a[i-1]][a[i]];
            b[j] = 0;
        }
    }
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++){
            cin >> c[i][j];
            if(i != j)
                cmin = min(cmin, c[i][j]);
        }
    a[1] = 1;
    b[1] = 1;
    Try(2);
    cout << "(";
    for(int i = 1; i <= n; i++)
        cout << xopt[i] << ",";
    cout << "1)" << endl;
    cout << fopt;
}

