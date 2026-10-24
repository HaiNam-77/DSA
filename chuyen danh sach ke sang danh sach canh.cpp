#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	cin.ignore();
	vector <pair<int,int>> ds;
	for(int i=1;i<=n;i++){
		string s,c;
		getline(cin,s);
		stringstream ss(s);
		while(ss>> c){
			int num=stoi(c);
			if(num>i){
			ds.push_back({i,num});
		}
		}
	}
	for(auto x : ds){
		cout << x.first << " " << x.second << endl;
	}
}

