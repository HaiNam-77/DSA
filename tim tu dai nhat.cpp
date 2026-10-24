#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	string s1="";
	int max_len=0;
	while(cin >> s){
		if(s.size() > max_len) {
			max_len=s.size();
			s1=s;
		}
	}
	cout << s1 << " - " << s1.size();
}

