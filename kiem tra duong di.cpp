#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
bool chuaxet[1005];
int x,y,ok=0;
void DFS(int x){
	
	chuaxet[x]=false;
	if(x==y){
		ok=1;
		return;
	}
	for(int v: List[x]){
		if(chuaxet[v]) DFS(v);
	}
	
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
		memset(chuaxet,true,sizeof(chuaxet));
		ok=0;
		 cin >> x >> y;
		 DFS(x);
		 if(ok==0) cout << "NO";
		 else cout << "YES";
		 cout << endl;
			
		}
	}
}

