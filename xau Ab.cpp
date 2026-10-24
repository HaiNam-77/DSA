#include<bits/stdc++.h>
using namespace std;
int n,a[100],ok;
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
int check(){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1) cnt++;
	}
	if(cnt==0 || cnt==n) return 0;
	return 1;
}
void in(){
	for(int i=1;i<=n;i++){
		char c= 'A';
		c = c+a[i];
		cout << c;
		 
	}
	cout << endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for(int i=1;i<=n;i++) a[i]=0;
	while(!ok){
		if(check()){
			in();
		}
		sinh();
	}
}

