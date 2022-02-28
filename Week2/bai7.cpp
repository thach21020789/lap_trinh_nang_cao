#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;


int main(){
    int x ; cin  >> x;
    int i = 1;
    double pre_x=x, pre_i=1;
    double sum = 1, oldsum = 0;
    while(sum - oldsum > 0.001){
    	oldsum = sum;
    	sum += pre_x/pre_i;
    	++i;
    	pre_x*=x;
    	pre_i*=i;
	}
	cout <<setprecision(4) << fixed << sum;
    return 0;
}
