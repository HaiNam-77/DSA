#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector <int> List[1005];
void BFS(int u){
	queue <int> q;
	q.push(u);
	chuaxet[u]=false;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		cout << x << " ";
		for(int v : List[x]){
			if(chuaxet[v]) q.push(v);
			chuaxet[v]=false;
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
		}
		BFS(u);
		cout << endl;
	}
}

