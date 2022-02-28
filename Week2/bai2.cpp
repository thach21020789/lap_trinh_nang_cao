#include<iostream>
using namespace std;
int main(){
    int n ; cin >> n;
    int  i = 1;
    do{
        if(i % 7 == 0)
        cout << i << " ";
        i++;
    }while( i != n);
    return  0;
}
