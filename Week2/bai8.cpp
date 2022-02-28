#include<bits/stdc++.h>
using namespace std;
int main(){
    long long number ; cin >> number;
    int count = 0;
    do{
        long long last = number % 10;
        count++;
        number /= 10;
    }while(number != 0);
    cout << count;
	return 0;
}
