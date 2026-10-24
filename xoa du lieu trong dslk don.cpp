#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int xoa;
	cin >> xoa;
	for(int i=0;i<n;i++){
		if(a[i]==xoa) continue;
		cout << a[i] << " ";
	}
}

