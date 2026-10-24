#include<bits/stdc++.h>
using namespace std;
void hop(int n,int a[],int m,int b[]){
	int i=0,j=0;
	while(i<n && j < m){
		if(a[i] < b[j]){
			cout << a[i] << " ";
			i++;
		}
		else if(a[i] > b[j]){
			cout << b[j] << " ";
			j++;
		}
		else {
			cout << a[i] << " ";
			i++,j++;
		}
	}
	while (i < n) cout << a[i++] << " ";
    while (j < m) cout << b[j++] << " ";
}
void giao(int n,int a[],int m,int b[]){
	int i=0,j=0;
	while(i<n && j<m){
		if(a[i] < b[j]) i++;
		else if(a[i] > b[j]) j++;
		else{
			cout << a[i] << " ";
			i++,j++;
		}
	}
}
void solve(){
	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<m;i++) cin >> b[i];
	sort(a,a+n);
	sort(b,b+m);
	hop(n,a,m,b);
	cout << endl;
	giao(n,a,m,b);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}

