#include<bits/stdc++.h>
using namespace std;
struct task{
	int start, finish;
};
typedef struct task task;
bool cmp(task x, task y){
	return x.finish < y.finish;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		task a[n];
		for(int i=0;i<n;i++){
			cin >> a[i].start >> a[i].finish;
		}
		sort(a,a+n,cmp);
		int i=0,dem=1;
		for(int j=1;j<n;j++){
			if(a[j].start >= a[i].finish){
				i=j;
				dem++;
			}
		}
		cout << dem << endl;
	}
}

