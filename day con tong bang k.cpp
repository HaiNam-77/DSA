#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
int x[100],used[100];
int dem=0;
void Try(int i){
	for(int j=x[i-1]+1;j<=n;j++){
			x[i]=j;
			if(i<=n){
				long long sum=0;
				for(int z=1;z<=i;z++){
					sum+=a[x[z]];
				}
				if(sum==k){
					dem++;
					cout << "[";
					for(int z=1;z<=i;z++){
						if(z==i) cout << a[x[z]];
						else cout << a[x[z]] << " ";
				}
				cout << "] ";
				}
				else if(sum<k) Try(i+1);
			}
		}
}
void solve(){
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	Try(1);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		if(dem==0) cout << "-1";
		dem=0;
		cout << endl;
	} 
}
