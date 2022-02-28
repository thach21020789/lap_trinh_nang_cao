#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int n ; cin >> n;
    const int N_max = 1000;
    double arrayVectorA[N_max],arrayVectorB[N_max];
    for(int i = 0 ; i < n ; i++) cin >> arrayVectorA[i];
    for(int i = 0 ; i < n ; i++) cin >> arrayVectorB[i];
    double product = 0;
    for(int i = 0;  i < n ;i++ ){
    	product += arrayVectorA[i]*arrayVectorB[i];
	}
	cout << setprecision(2) << fixed <<  product;
    return 0;
}
