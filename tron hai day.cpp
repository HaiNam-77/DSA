#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		vector <int> a(n);
		vector <int> b(m);
		multiset <int> se;
		for(int i=0;i<n;i++)
		{
		 cin >> a[i];
		 se.insert(a[i]);
	}
		for(int i=0;i<m;i++){
		cin >> b[i];
		se.insert(b[i]);
	}
	for(int x : se){
		cout << x << " ";
	}
	cout << endl;
			
			}
}

