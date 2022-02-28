#include<bits/stdc++.h>
using namespace std;
int main(){
	string text; getline(cin ,text);
	int n = text.size();
	int i = 0;
	while(i != n){
		if(i > text.size()- 4 || text.substr(i,4) != "Zues"){
			cout << text[i];
			i++;
		}else{
			cout << "Zeus";
			i+=4;
		}
	}
	return 0;
}
