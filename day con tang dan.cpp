#include<bits/stdc++.h>
using namespace std;
vector <int> a(100,0);
vector <int> b(100,0);
int n;
vector <vector<int>> v;
void Try(int i,int pos){
	for(int j=pos;j<=n;j++){
		if(a[j] > b[i-1]){
			b[i]=a[j];
		}
		if(i>=2 && i<=n){
			vector <int> tmp;
			for(int z=1;z<=i;z++) tmp.push_back(b[z]);
			v.push_back(tmp);
		}
		else if(i<n) Try(i+1,j+1);
}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	Try(1,1);
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}

