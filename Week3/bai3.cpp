#include<iostream>
#include<set>
using namespace std;
int main(){
	const int N_max = 1000;
	int n ; cin >> n;
	int a[N_max];
	set <int> se;
	for(int i = 0 ; i < n ;i++){
		int x ; cin >> x;
		se.insert(x);
	}
	for(set<int>::iterator it = se.begin() ; it != se.end() ;it++){
		cout << *it << " ";
	}
	return 0;
}
