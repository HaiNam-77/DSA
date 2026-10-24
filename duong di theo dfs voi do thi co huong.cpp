#include<bits/stdc++.h>
using namespace std;
vector<int> List[1005];
bool xet[1005];
int parent[1005];
void DFS(int u){
	xet[u]=false;
	for(int v : List[u]){
		if(xet[v]){
			parent[v]=u;
			DFS(v);
		}
	}
}
void duongdi(int s,int t){
	DFS(s);
	vector <int> path;
	if(xet[t]){
		cout << "-1" << endl;
		return;
	}
	else{
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
		memset(xet,true,sizeof(xet));
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

