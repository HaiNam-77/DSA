#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int a[n+1][n+1];
	vector<int> List[1005];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
			if(a[i][j]==1) List[i].push_back(j);
		}
	}
	for(int i=1;i<=n;i++){
		for(int v: List[i]){
			cout << v << " ";
		}
		cout << endl;
	}
}


