#include<bits/stdc++.h>
using namespace std;
int n,dem,k,a[100],b[100];
void ktra(int a[],int b[],int n){
	dem++;
	for(int i=1;i<=n;i++){
		if(a[i]!=b[i]){
			return;
		}
	}
	cout << dem;	
}
void Try(int i){
	for(int j=b[i-1]+1;j<=n-k+i;j++){
		b[i]=j;
		if(i==k){
			ktra(a,b,k);
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
		dem=0;
		for(int i=1;i<=k;i++){
			cin >> a[i];
		}
		Try(1);
		cout << endl;
	}
}

