#include<bits/stdc++.h>
using namespace std;
int n,ok,a[100],fb[92];

int dem=1;
void in() {
	cout << dem << ": ";
    for(int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void sinh() {
	dem++;
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

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	fb[0]=0,fb[1]=1;
	for(int i=1;i<=n;i++) a[i]=0;
	for(int i=2;i<=92;i++){
		fb[i] = fb[i-1] + fb[i-2];
	}
	while(!ok){
		for(int i=0;i<=92;i++){
			if(fb[i]==dem){
				in();
			}
		}
		sinh();
	}
	
}

