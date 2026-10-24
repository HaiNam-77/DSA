#include<bits/stdc++.h>
using namespace std;
vector <long long> c(101,0);
void ktao(){
	c[0]=1,c[1]=1;
	for(int i=2;i<=100;i++){
		for(int j=0;j<=i-1;j++){
			c[i]+= (c[j]*c[i-j-1]);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	ktao();
	while(t--){
		int n;
		cin >> n;
		cout << c[n-1] << endl;
	}
}

