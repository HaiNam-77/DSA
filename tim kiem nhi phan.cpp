#include<bits/stdc++.h>
using namespace std;

int tknp(int a[],int n,int k){
	int l=1,r=n;
	while(l<=r){
		int mid=(r-l)/2;
		if(a[mid]==k) return k;
		else if(a[mid] > k) r = mid -1;
		else l = mid+1;
	}
	return 0;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,k,a[100001];
		cin >> n >> k;
		for(int i=1;i<=n;i++) cin >> a[i];
		int kq = tknp(a,n,k);
		if(kq!=0) cout << kq << endl;
		else cout << "NO" << endl;
	}
}

