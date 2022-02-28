#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int lowerBound, upperBound; cin >> lowerBound >> upperBound;
    lowerBound = sqrt(lowerBound);
    upperBound = sqrt(upperBound);
    for(int i = lowerBound ; i <= upperBound ; i++){
    	cout << i*i << " ";
	}
    return 0;
}
