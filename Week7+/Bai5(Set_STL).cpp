#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set <int> se;
    set<int>::iterator it;
    int n ; cin >> n;
    while(n --){
        int idx, x; cin >> idx >> x;
        if(idx == 1){
            se.insert(x);
        }else if(idx  == 2){
            //it = se.find(x);
            se.erase(x);
        }else{
            if(se.find(x) != se.end()){
                cout << "Yes" << endl;
            }else cout << "No" << endl;
        }
    }  
    return 0;
}




