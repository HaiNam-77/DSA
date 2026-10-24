#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
bool chuaxet[1005];
void DFS(int u){
	chuaxet[u]=false;
	for(int v : List[u]){
		if(chuaxet[v]){
			DFS(v);
		}
	}
}
void tplt(int n){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(chuaxet[i]){
			cnt++;
			DFS(i);
		}
	}
	cout << cnt << endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		memset(chuaxet,true,sizeof(chuaxet));
		for(int i=0;i<1005;i++) List[i].clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		tplt(n);
	}
}

