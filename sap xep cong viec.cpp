#include<bits/stdc++.h>
using namespace std;
struct work{
	int start,end;
};
typedef struct work work;
bool cmp(work a,work b){
	return a.end < b.end;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <work> a(n);
		for(int i=0;i<n;i++) cin >> a[i].start;
		for(int i=0;i<n;i++) cin >> a[i].end;
		sort(a.begin(),a.end(),cmp);
		int dem=1;
		int current=0;
		for(int i=1;i<n;i++){
			if(a[i].start >= a[current].end){
				dem++;
				current = i;
			}
		}
		cout << dem << endl;
	}
}

