#include<bits/stdc++.h>
using namespace std;
int n,dem,a[100],b[100],used[100];
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
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			b[i]=j;
			used[j]=1;
			if(i==n){
				ktra(a,b,n);	
			}
			else Try(i+1);
			used[j]=0;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		dem=0;
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		Try(1);
		cout << endl;
	}
}

