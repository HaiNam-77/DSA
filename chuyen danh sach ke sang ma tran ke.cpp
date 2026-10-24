#include<bits/stdc++.h>
using namespace std;
	int mt[1001][1001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	cin.ignore();
 
	for(int i=1;i<=n;i++){
		string s,c;
		getline(cin,s);
		stringstream ss(s);
		while(ss >> c){
			mt[i][stoi(c)]=1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << mt[i][j] << " ";
		}
		cout << endl;
	}
}

