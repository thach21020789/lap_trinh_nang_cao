#include<iostream>
using namespace std;
int main(){
    int n ; cin >> n;
    int a[n],b[n];
    bool test = true;
    for(int i = 0 ; i < n ;i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ;i++){
        cin >> b[i];
    }
    for(int i = 0 ; i < n ;i++){
        if(a[i] != b[i]){
            test = false;
        }
    }
    if(test == true) cout << "YES";
    else cout << "NO";
    return 0;
}
