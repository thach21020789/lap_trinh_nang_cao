#include<iostream>
#include<iomanip>
using namespace std;
void Insert(double a[], int &n , double val, int pos){
    for(int i = n ; i > pos ; i-- ){
        a[i] = a[i - 1];
    }
    a[pos] = val;
    ++n;
}
int main(){
    int n ; cin >> n;
    const int N_max = 1000;
    double a[N_max];
    for(int i = 0 ; i < n ;i++) cin >> a[i];
    double value ; cin >> value;
    if(value < a[0]){
    	Insert(a,n,value, 0 );
	}else if(value > a[n - 1]){
	    Insert(a,n,value, n - 1);
	}else{
		for(int i = 0 ; i < n ;i++){
			if(a[i] > value){
				Insert(a,n,value, i);
				break;
			}
		}
	}
	for(int i = 0 ; i < n ;i++) cout << fixed << setprecision(2) <<  a[i] << " ";
    return 0;
}
