#include<bits/stdc++.h>
using namespace std;
int n, a[11],used[11],dem=0;
void in(int a[],int n){
	cout << dem << ": ";
	for(int i=1;i<=n;i++){
		cout << a[i] << " ";
	}
	cout << "\n";
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==n){
				dem++;
				in(a,n);
			}
			else Try(i+1);
			used[j]=0;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	Try(1);
}

