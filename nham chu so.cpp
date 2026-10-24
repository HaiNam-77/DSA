#include<bits/stdc++.h>
using namespace std;
long long min(vector <int> v1){
	long long res=0;
	for(int i=v1.size()-1;i>=0;i--){
		if(v1[i]==6){
			v1[i]=5;
		}
		res = res*10+v1[i];
	}
	return res;
}
long long max(vector <int> v1){
	long long ans=0;
	for(int i=v1.size()-1;i>=0;i--){
		if(v1[i]==5){
			v1[i]=6;
		}
		ans = ans*10+v1[i];
	}
	return ans;
}
void solve(){
	long long a,b;
	cin >> a >> b;
	vector <int> v1;
	vector <int> v2;
	while(a>0){
		int x= a%10;
		v1.push_back(x);
		a/=10;
	}
	while(b>0){
		int x = b%10;
		v2.push_back(x);
		b/=10;
	}
	long long kqmin= min(v1)+min(v2);
	long long kqmax= max(v1)+max(v2);
	cout << kqmin << " " << kqmax;
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 solve();
	 
}

