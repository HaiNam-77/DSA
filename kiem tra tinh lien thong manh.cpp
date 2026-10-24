#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
bool xet[1005];
void DFS(int u){
	xet[u]=false;
	for(int v : List[u]){
		if(xet[v]){
			DFS(v);
		}
	}
}
void tplt(int n){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(xet[i]){
			dem++;
			DFS(i);
		}
	}
	if(dem==1) cout << "YES" << endl;
	else cout << "NO" << endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		memset(xet,true,sizeof(xet));
		for(int i=0;i<1005;i++) List[i].clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		tplt(n);
	}
}

