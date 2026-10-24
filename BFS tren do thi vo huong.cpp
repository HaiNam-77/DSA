#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
bool chuaxet[1005];
void BFS(int u){
	queue <int> Q;
	Q.push(u);
	chuaxet[u]=false;
	while(!Q.empty()){
		int x = Q.front();
		Q.pop();
		cout << x << " ";
	 for(int v : List[x]){
		if(chuaxet[v]){
			Q.push(v);
			chuaxet[v]=false;
		}
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
		for(int i=0;i<1005;i++) List[i].clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		BFS(u);
		cout << endl;
	}
}

