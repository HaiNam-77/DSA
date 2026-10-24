#include<bits/stdc++.h>
using namespace std;
int n;
int x[10000],cot[100],cheo1[1000], cheo2[1000],dem=0;
void Try(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]==0 && cheo1[i-j+n]==0 && cheo2[i+j-1]==0){
			x[i]=j;
			cot[j]=1,cheo1[i-j+n]=1,cheo2[i+j-1]=1;
			if(i==n){
				dem++;
			}
			else Try(i+1);
			cot[j]=0,cheo1[i-j+n]=0,cheo2[i+j-1]=0;
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
		dem=0;
		Try(1);
		cout << dem << endl;
	}
}

