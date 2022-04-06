#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int n ; cin >> n;
    vector <int> v;
    for(int i = 0; i < n ;i++) {
        int x ; cin >> x;
        v.push_back(x);
    }
    int pos; cin >> pos;
    v.erase(v.begin() + pos - 1);
    int a,b; cin >> a >> b;
    /*int distant =  b - a;
    a = a - 1;
    int i = 1;
    while(i != distant + 1){
        v.erase(v.begin() + a);
        ++i;
    }*/
    v.erase(v.begin() + a - 1, v.begin() + b - 1 );
    cout << v.size() << endl;
    for(int i = 0;  i < v.size(); i++) cout << v[i] << " ";
    return 0;
}

