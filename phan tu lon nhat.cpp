#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		vector <int> vt;
		for(int i=0;i<n;i++){
			int x;
			cin >> x;
			vt.push_back(x);
		}
		sort(vt.begin(),vt.end(),greater<int>());
		for(int i=0;i<k;i++) cout << vt[i] << " ";
		cout << endl;
	}
}

