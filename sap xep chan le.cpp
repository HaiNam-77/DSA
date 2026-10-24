#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n ;
	int a[n+1];
	multiset <int> le;
	multiset <int,greater<int>> chan;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		if(i%2==0) chan.insert(a[i]);
		else le.insert(a[i]);
	}
	auto itChan = chan.begin();
	auto itLe = le.begin();
	for(int i=1;i<=n;i++){
		if(i%2==0){
			cout << *itChan << " ";
			itChan++;
		}
		else{
			cout << *itLe << " ";
			itLe++;
		}
	}
}

