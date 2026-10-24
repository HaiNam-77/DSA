#include<bits/stdc++.h>
using namespace std;
int n;
int a[100][100];
string s="";
bool ok=false;
void nhap(){
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
		}
	}
}
void Try(int i,int j){
	if(i==n && j==n){
		cout << s << " ";
		ok = true;
	}
	if(i<n && a[i+1][j]==1){
		s+="D";
		a[i][j]=0;
		Try(i+1,j);
		a[i][j]=1;
		s.pop_back();
	}
	if(j>1 && a[i][j-1]==1){
		s+="L";
		a[i][j]=0;
		Try(i,j-1);
		a[i][j]=1;
		s.pop_back();
	}
	if(j<n && a[i][j+1]==1){
		s+="R";
		a[i][j]=0;
		Try(i,j+1);
		a[i][j]=1;
		s.pop_back();
	}
	if(i>1 && a[i-1][j]==1){
		s+="U";
		a[i][j]=0;
		Try(i-1,j);
		a[i][j]=1;
		s.pop_back();
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		ok=false;
		nhap();
		if(a[1][1]==0 || a[n][n]==0){
			cout << "-1" << endl;
			continue;
		}
		Try(1,1);
		if(!ok){
			cout << -1;
		}
		cout << endl;
	} 
}

