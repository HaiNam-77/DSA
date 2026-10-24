#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		string x;
		cin >> x;
		for(int i=x.size()-1;i>=0;i--){
			if(x[i]=='1') x[i] = '0';
			else{
				x[i]='1';
				break;
			}
		}
		cout << x << endl;
	} 
}

