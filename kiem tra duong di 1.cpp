#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
bool xet[1005];
void DFS(int u){
	xet[u]=false;
	for(int v: List[u]){
		if(xet[v]) DFS(v);
	}
}
void duongdi(int u,int v){
	DFS(u);
	if(xet[v]){
		cout << "NO";
	}
	else cout << "YES";
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		for(int i=0;i<1005;i++) List[i].clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		int q;
		cin >> q;
		while(q--){
			int x,y;
			cin >> x >> y;
			memset(xet,true,sizeof(xet));
			duongdi(x,y);
			cout << endl;
		}
	}
}

