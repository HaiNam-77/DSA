#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[10000],x[10000];
int tong=0;
void Try(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		tong+=a[x[i]];
		if(tong == k){
			for(int z=1; z<=i;z++){
				cout << a[x[z]] << " ";
			}
			tong=0;
			break;
		}
		else if(tong > k){
			tong=0;
			break;
		}
		else Try(i+1);
	}
}
int main(){
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	Try(1);
}

