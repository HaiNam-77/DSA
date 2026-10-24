#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
string s;
vector <string> v;
map <string,int> mp;
void in(int a[],int k,vector <string> v){
	for(int i=1;i<=k;i++){
		cout << v[a[i]-1] << " ";
	}
	cout << endl;
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			in(a,k,v);
		}
		else Try(i+1);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		cin >> s;
		if(mp[s]==0) v.push_back(s);
		mp[s]++;
	}
	n = v.size();
	sort(v.begin(),v.end());
	
	Try(1);
}

