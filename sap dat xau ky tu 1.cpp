#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		map <int,int> mp;
		int max =0;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
			if(mp[s[i]]>max) max=mp[s[i]];
		}
		if(max <= (s.size()+1)/2) cout << "1" << endl;
		else cout << "-1" << endl;
	}
}

