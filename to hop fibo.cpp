#include<bits/stdc++.h>
using namespace std;
int n,a[100],used[100];
long long fb[100];
long long dem=0;
void ktao(){
	fb[0]=0,fb[1]=1;
	for(int i=2;i<=63;i++) fb[i]=fb[i-1]+fb[i-2];
}
int ktra(long long n){
	for(int i=0;i<=63;i++){
		if(n==fb[i]) return 1;
	}
	return 0;
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
		a[i]=j;
		used[j]=1;
		if(i==n){
			dem++;
			if(ktra(dem)==1){
				cout << dem << ": ";
				for(int z=1;z<=n;z++){
					cout << a[z] << " ";
				}
				cout << endl;
			}
		}
		else Try(i+1);
		used[j]=0;
	}
}
}
void solve(){
	cin >> n;
	ktao();
	Try(1);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}

