#include<bits/stdc++.h>
using namespace std;
int main(){
	string s ; getline(cin ,s);
	stringstream ss(s);
	string token ;
	int count = 0;
	while(ss >> token){
		count++;
	}
	cout << count;
	return 0;
}
