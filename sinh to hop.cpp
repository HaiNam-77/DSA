#include<bits/stdc++.h>
using namespace std;
int n,k,a[20];
void in(int a[],int k){
	for(int i=1;i<=k;i++){
		cout << a[i];
	}
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			in(a,i);
			cout << " ";
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
		cout << endl;
	}
}

