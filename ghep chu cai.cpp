#include<bits/stdc++.h>
using namespace std;

char c;
string s;
int used[1000];
int n;


bool isVowel(char x) {
    return (x == 'A' || x == 'E');
}

void Try(int i){
    for(char j = 'A'; j <= c; j++){
        if(used[j] == 0){
            
           
            if (i >= 2) {
                if (isVowel(s[i-1]) && !isVowel(s[i-2]) && !isVowel(j)) {
                    continue;
                }
            }
            
            s += j;
            used[j] = 1;
            
            if(i == n - 1){
                cout << s << "\n";
            }
            else {
                Try(i + 1);
            }
            
            s.pop_back();
            used[j] = 0;
        }
    }
}

int main(){
    // T?i uu I/O (Nh?p/xu?t) - R?t quan tr?ng d? gi?m th?i gian ch?y
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> c;
    n = c - 'A' + 1;
    Try(0);
}
