#include<bits/stdc++.h>
using namespace std;
vector<int> List[1005];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		for(int i=1;i<=1005;i++) List[i].clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		for(int i=1;i<=n;i++){
			cout << i << ": ";
			sort(List[i].begin(),List[i].end());
			for(int v: List[i]){
				cout << v << " ";
			}
			cout << endl;
		}
	} 
}

