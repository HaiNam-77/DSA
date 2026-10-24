#include<bits/stdc++.h>
using namespace std;
int x[10],cot[10],cheo1[100],cheo2[100];
int a[10][10];
long long sum=0;
long long max1 = -1;
void Try(int i){
	for(int j=1;j<=8;j++){
		if(cot[j]==0 && cheo1[i-j+8]==0 && cheo2[i+j-1]==0){
			x[i]=j;
			sum+= a[i][j];
			cot[j]=1,cheo1[i-j+8]=1,cheo2[i+j-1]=1;
			if(i==8){
				if(sum > max1) max1=sum;
			}
			else Try(i+1);
			cot[j]=0,cheo1[i-j+8]=0,cheo2[i+j-1]=0;
			sum-=a[i][j];
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for(int l=1;l<=t;l++){
		sum=0;
		max1 = -1;
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++){
				cin >> a[i][j];
			}
		}
		Try(1);
		cout << max1 << endl;
}
}

