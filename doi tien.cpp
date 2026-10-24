#include<bits/stdc++.h>
using namespace std;
void solve(){
	int a[]={1,2,5,10,20,50,100,200,500,1000};
	int n;
	cin >> n;
	int dem=0;
	for(int i=9;i>=0;i--){
		while(n >= a[i]){
			dem ++;
			n-=a[i];
		}
	}
	cout << dem;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}

