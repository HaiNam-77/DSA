#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <long long> a(n);
		for(int i=0;i<n;i++) cin >> a[i];
		sort(a.begin(),a.end());
		while(a.size()>2){
				a[0]=a[0]*10 + a[2];
				if(a.size()>=4){
				a[1]=a[1]*10 + a[3];
				a.erase(a.begin()+3);
			}
				a.erase(a.begin()+2);
			
		}
		long long kq = a[0] + a[1];
		cout << kq << endl;
	} 
}

