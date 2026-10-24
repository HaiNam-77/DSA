#include<bits/stdc++.h>
using namespace std;
void np(int n){
	queue <string> q;
	string s="";
	q.push("1");
	while(n--){
		s = q.front();
		q.pop();
		cout << s << " ";
		q.push(s+"0");
		q.push(s+"1");
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		np(n);
		cout << endl;
	} 
}

