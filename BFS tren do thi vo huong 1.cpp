#include<bits/stdc++.h>
using namespace std;
vector<int> List[1005];
bool chuaxet[1005];
void BFS(int u){
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int x= q.front();
		q.pop();
		chuaxet[x]=false;
		cout << x << " ";
		for(int v: List[x]){
			if(chuaxet[v]){
				q.push(v);
				chuaxet[v]=false;
			}
		}
	}
}
void solve(){
	int n,m,u;
	cin >> n >> m >> u;
	for(int i=0;i<1005;i++) List[i].clear();
	memset(chuaxet,true,sizeof(chuaxet));
	for(int i=1;i<=m;i++){
		int x,y;
		cin >> x >> y;
		List[x].push_back(y);
		List[y].push_back(x);
	}
	BFS(u);
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

