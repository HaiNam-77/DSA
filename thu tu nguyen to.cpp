#include<bits/stdc++.h>
using namespace std;
int n,k,a[50];
int dem=0;
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
void in(int a[],int k){
	cout << dem << ": ";
	for(int i=1;i<=k;i++){
		cout << a[i] << " ";
	}
	cout << "\n";
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			dem++;
			if(nt(dem)==1){
				in(a,k);
			}
		}
		else Try(i+1);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> k;
	Try(1);
}

