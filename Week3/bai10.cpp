#include<bits/stdc++.h>
using namespace std;
int main(){
	string text; cin >> text;
	int n = text.size();
	int count  = 0;
	for(int i = 0 ; i < text.size()  ;i++ ){
		if(isalnum(text[i])) count++;
	}
	if((n < 6 || n > 16) || (count  < n  ) || ('0'<= text[0] && text[0] <= '9')  ){
		cout << "Invalid username.";
	}else{
		cout << "Valid username.";
	}
	return 0;
}
