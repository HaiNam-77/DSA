#include<bits/stdc++.h>
using namespace std;
string s(8,' ');
void in(string s){
	s.insert(2,1,'/');
	s.insert(5,1,'/');
	cout << s << endl;
}
void Try(int i){
	if(i==4){
		s[i]= '2';
		Try(i+1);
		
	}
	else{
	for(char j='0';j<='2';j+=2){
		s[i]=j;
		if(i==7){ 
			if(s.substr(0,2)!="00" && s.substr(2,2)=="02"){
				in(s);
			}
		}
		else Try(i+1);
	}
}
} 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	Try(0);
}
