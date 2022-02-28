#include<bits/stdc++.h>
using namespace std;
void Swap(int &a, int &b){
    int tmp = a; 
    a = b ;
    b = tmp;
}
int main(){
    int n ; cin >> n;
    double array[n];;
    for(int i = 0 ; i < n ;i++) cin >> array[i];
    for(int i = 0 ; i < n ;i++){
        for(int j = i + 1 ; j < n ;j++){
            if(array[j] > array[i])
            {
                swap(array[i],array[j]);
            }
        }
    }
    for(int i = 0; i < n ;i++) cout << setprecision(2) << fixed <<  array[i] << " ";
    return 0;
}
