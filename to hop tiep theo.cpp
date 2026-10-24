#include<bits/stdc++.h>
using namespace std;
int n,k;
map <int,int> mp;
void ThTiep(int a[],int n,int k){
	int i=k;
	
	while(i>0 && a[i]==n-k+i) i--;
	if(i==0){
		cout << k;
		return;
	}
	a[i]++;
	for(int j=i+1;j<=k;j++){
		a[j]=a[j-1]+1;
	}
	int dem=0;
	for(int i=1;i<=k;i++){
		if(mp[a[i]]==0) dem++;
	}
	cout << dem;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int a[n+1];
		mp.clear();
		for(int i=1;i<=k;i++){
			cin >> a[i];
			mp[a[i]]=1;
		}
		ThTiep(a,n,k);
		cout << endl;
	}
}


