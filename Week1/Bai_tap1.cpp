#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int a, b,c; cin >> a >> b >> c;
    float p = (a + b + c)*0.5;
    if(a + b <= c || a + c <= b || b + c <= a){
        cout << "invalid";
    }else{
        cout << fixed << setprecision(2) <<  sqrt(p*(p - a)*(p - b)*(p - c));
    }
    return 0;
}
