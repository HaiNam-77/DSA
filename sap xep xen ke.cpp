#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1];
		for(int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		int l=0,r=n-1;
		while(l<=r){
			if(l==r){
				cout << a[l];
				break;
			}
			cout << a[r] << " " << a[l] << " ";
			r--,l++;
		}
		cout << endl;
	} 
}

