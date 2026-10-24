#include<bits/stdc++.h>
using namespace std;
int a[11],n;
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		a[n-i+1]=j;
		if(i==(n+1)/2){
				for(int k=1;k<=n;k++){
					cout << a[k] << " ";
				}
				cout << endl;
		}
		else Try(i+1);
	}
}
int main(){
	cin >> n;
	Try(1);
}
