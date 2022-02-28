#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int n ; cin >> n;
    double sum = 0;
    const int N_max = 1000;
    double array[N_max];
    for(int i = 0 ; i < n ;i++){
        cin >> array[i];
        sum+=array[i];
    }
    double mean = sum/n;
    double result = 0;
    for(int i = 0 ; i < n ;i++){
    	result = result + pow((array[i] - mean),2);
	}
	cout << setprecision(2) << fixed <<  result/n;
    return 0;
}
