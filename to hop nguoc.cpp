#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
void Try(int i){
	for(int j=n-k+i;j>=a[i-1]+1;j--){
		a[i]=j;
		if(i==k){
			for(int z=1;z<=k;z++){
				cout << a[z] << " ";
			}
			cout << endl;
		}
		else Try(i+1);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1);
	}
}

