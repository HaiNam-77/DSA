#include<bits/stdc++.h>
using namespace std;
int n;
char a[100];
void in(char a[],int n){
	for(int i=1;i<=n;i++){
		cout << a[i];
	}
}
void Try(int i){
	for(char j='A';j<='B';j++){
			a[i]=j;
			if(i==n){
				in(a,n);
				cout << " ";
			}
			else Try(i+1);
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
		cout << endl;
	}
}

