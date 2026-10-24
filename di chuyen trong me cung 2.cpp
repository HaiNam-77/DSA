#include<bits/stdc++.h>
using namespace std;
int n;
int a[11][11];
int dem=0;
string s="";
void Try(int i,int j){
	if(i==n-1 && j==n-1){
		cout << s << " ";
		dem++;
	}
	if(i+1 <= n-1 && a[i+1][j]==1){
		s+='D';
		a[i][j]=0;
		Try(i+1,j);
		s.pop_back();
		a[i][j]=1;
	}
	if(j-1 >= 0 && a[i][j-1]==1){
		s+='L';
		a[i][j]=0;
		Try(i,j-1);
		s.pop_back();
		a[i][j]=1;
	}
	if(j+1 <= n-1 && a[i][j+1]==1){
		s+='R';
		a[i][j]=0;
		Try(i,j+1);
		s.pop_back();
		a[i][j]=1;
	}
	if(i-1>=0 && a[i-1][j]==1){
		s+='U';
		a[i][j]=0;
		Try(i-1,j);
		s.pop_back();
		a[i][j]=1;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		dem=0;
		cin >> n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cin >> a[i][j];
		}
		if(a[0][0]==0 || a[n-1][n-1]==0){
			cout << "-1" << endl;
			continue;
		}
		Try(0,0);
		if(dem==0) 	cout << "-1";
		cout << endl;
	}
}

