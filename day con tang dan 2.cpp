#include<bits/stdc++.h>
using namespace std;
int n,a[100],used[100];
vector <string> v(100);
void Try(int i){
	long long max = -1e18;
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			if(a[j] > max ){
				v[i] += a[j] + '0';
				max = a[j];
			}		
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
}

