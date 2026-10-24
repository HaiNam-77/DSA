#include<bits/stdc++.h>
using namespace std;
long long m = 1e9 + 7;
long long power(long long a,long long b){
	if(b==0) return 1;
	long long x = power(a,b/2);
	if(b%2==0) return x*x%m;
	return a*(x*x%m)%m;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(1){
		long long a;
		long long b;
		cin >> a >> b;
		if(a==0 && b==0) return 0;
	
		cout << power(a,b) << endl;
		
	}
}

