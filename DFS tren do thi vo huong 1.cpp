#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
bool chuaxet[1005];
void DFS(int u){
	chuaxet[u]=false;
	cout << u << " ";
	for(int v: List[u]){
		if(chuaxet[v]==true){
			DFS(v);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,m,u;
		cin >> n >> m >> u;
		memset(chuaxet,true,sizeof(chuaxet));
		for(int i=1;i<=1005;i++) List[i].clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		DFS(u);
		cout << endl;
	} 
	
}

