#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
int dem=0;
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			dem++;
			if(nt(dem)==1){
				cout << dem << ": ";
			for(int z=1;z<=k;z++){
				cout << a[z] << " ";
			}
			cout << endl;
		}
	}
	else Try(i+1);
	}
}
void solve(){
	cin >> n >> k;
	Try(1);
} 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}

