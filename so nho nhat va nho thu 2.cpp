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
		set <int> se;
		for(int i=0;i<n;i++){
			int x;
			cin >> x;
			se.insert(x);
		}
		if(se.size()==1){
			cout << "-1" << endl;
			continue;
		}
		else{
			auto it = se.begin();
			cout << *it << " ";
			it++;
			cout << *it;
		}
		cout << endl;
	}
}


