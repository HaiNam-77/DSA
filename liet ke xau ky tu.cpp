#include<bits/stdc++.h>
using namespace std;
string s(100,'A');
char c;
int k;
void Try(int i){
	char c1=s[i-1];
	for(char j=c1;j<=c;j++){
		s[i]=j;
		if(i==k){
			for(int z=1;z<=k;z++) cout << s[z];
			cout << endl;
		}
		else Try(i+1);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> c >> k;
	Try(1);
}

