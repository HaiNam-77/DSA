#include<bits/stdc++.h>
using namespace std;
int n,m,a[100],used[100];
int dem=0;
void Try(int i){
	used[m]=1;
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==n-1){
				for(int z=1;z<=n-1;z++){
					cout << a[z] << " ";
				}
				cout << m;
				cout << endl;
			}
			else Try(i+1);
			used[j]=0;
		}
	}
}
void solve(){
	cin >> n >> m;
	Try(1);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}

