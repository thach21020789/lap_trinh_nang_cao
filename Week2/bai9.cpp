#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n ; cin >> n;
    const int n_max = 1000;
    double array[n_max];
    for(int i = 0 ; i  < n ; i++) cin >> array[i];
    for(int i = n - 1; i >= 0 ; i --){
        cout << fixed << setprecision(2) << array[i] << " ";
    }
    return 0;
}
