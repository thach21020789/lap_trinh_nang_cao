#include<bits/stdc++.h>
using namespace std;
int main(){
	string text; getline(cin ,text);
	int i = 0;
	int count = 0;
	while(text[i] == ' '){
		count++;
		++i;
	}
	for(int i = 0 ; i < count - 1  ;  i++) cout << " ";
	for(int i = 0 ; i < text.size() ;i++){
		if(text[i] == ' ' && text[i+1] == ' '){
			text.erase(text.begin() + i);
			--i;
		}
	}
	cout << text;
	return 0;
}
