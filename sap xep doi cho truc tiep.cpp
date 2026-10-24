#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector <int> a(n);
	for(int i=0;i<n;i++) cin >> a[i];
	int dem =0;
	for(int i=0;i<n-1;i++){
	
		for(int j=i+1;j<n;j++){
			if(a[i] > a[j]){
				swap(a[i],a[j]);
				
			}
		}
			dem++;
			cout << "Buoc " << dem << ": ";
				for(int z=0;z<n;z++) cout << a[z] << " ";
				cout << endl;
	}
}

