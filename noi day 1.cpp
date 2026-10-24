#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> a(n);
		multiset <long long > se;
		for(int i=0;i<n;i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		long long cost =0;
		while(se.size()>1){
			long long cp=0;
			auto it=se.begin();
			cp+=*it;
			it++;
			cp += *it;
			se.erase(se.begin());
			se.erase(it);
			se.insert(cp);
			cost+=cp;
		}
		cout << cost << endl;
	}
}

