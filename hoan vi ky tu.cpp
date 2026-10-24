#include<bits/stdc++.h>
using namespace std;
char c1,c2,a[100];
int used[1000];
int n;
void Try(int i){
	for(char j=c1;j<=c2;j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==n){
				for(int z=1;z<=n;z++){
					cout << a[z];
				}
				cout << endl;
			}
			else Try(i+1);
			used[j]=0;
		}
	}
}
void solve(){
	cin >> c1 >> c2;
	if(c1>c2){
		char tmp=c1;
		c1=c2;
		c2=tmp;
	}
	n=c2-c1+1;
	Try(1);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}

