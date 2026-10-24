#include<bits/stdc++.h>
using namespace std;
vector<int> List[1005];
int parent[1005];
void BFS(int u){
	queue<int> q;
	q.push(u);
	parent[u]=u;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int v : List[x]){
			if(parent[v]==0){
				q.push(v);
				parent[v]=x;
			}
		}
	}
}
void duongdi(int s,int t){
	BFS(s);
	if(parent[t]==0){
		cout << "-1" << endl;
	}
	else{
	vector <int> path;
	while(t!=s){
		path.push_back(t);
		t = parent[t];
	}
	path.push_back(s);
	reverse(path.begin(),path.end());
	for(int v : path){
		cout << v << " ";
	}
	cout << endl;
}
} 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int q;
	cin >> q;
	while(q--){
		int n,m,s,t;
		cin >> n >> m >> s >> t;
		memset(parent,0,sizeof(parent));
		for(int i=0;i<1005;i++) List[i].clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin >> x >> y;
			List[x].push_back(y);
		}
		duongdi(s,t);
	}
	
}

