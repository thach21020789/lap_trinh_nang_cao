#include<bits/stdc++.h>
using namespace std;
bool Checkopposite(int a[], int n){
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-1-i])
            dem++;
    }
    if(dem==0)
        return true;
    else
       return false; 
}
int main(){
	int n ; cin >> n;
	int a[n]; 
	for(int i = 0 ; i < n ;i++) cin >> a[i];
	if(Checkopposite(a,n)){
		cout << "Symmetric array.";
	}else{
		cout << "Asymmetric array.";
	}
	return 0;
}
