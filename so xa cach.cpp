#include<bits/stdc++.h>
using namespace std;
int n;
int k[10000],used[10000];
void Try(int i){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			if(i>1 && abs(j-k[i-1])==1) continue;
			k[i]=j;
			used[j]=1;
			if(i==n){
					for(int z=1;z<=n;z++) cout << k[z];
					cout << endl;
			}
			else Try(i+1);
			used[j]=0;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
	}
}

