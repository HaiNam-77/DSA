#include<bits/stdc++.h>
using namespace std;
int tknp(int a[],int n,int x){
	int l=0,r=n-1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m]==x) return m;
		else if(a[m] > x) r = m-1;
		else l = m+1;
	}
	return -1;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		int kq = tknp(a,n,x);
		cout << kq << endl;
	}
}

