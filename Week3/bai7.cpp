#include<bits/stdc++.h>
using namespace std;
int main(){
	string s ; getline(cin, s);
	int isAlpha = 0, isDigit = 0, isanother;
	for(int i = 0 ; i < s.size()  ;i++){
		if('a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z'){
			isAlpha++;
		}else if('0' <= s[i] && s[i] <= '9'){
			isDigit++;
		}else{
			isanother++;
		}
	}
	cout << isAlpha << " " << isDigit << " " << isanother ;
	return 0;
}

