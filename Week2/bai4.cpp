#include <iostream>

using namespace std;

int main()
{
    int total,totalleg;
    cin >> total >> totalleg;
    bool flag = false;
    int numChicken, numDog;
    int tmp  = 0 ;
    for(int numDog  = 1 ; numDog <= total ; numDog++){
        if(numDog*4 + (total - numDog)*2 == totalleg){
            flag = true;
            tmp = numDog;
        }
    }
    numChicken = total - tmp;
    if(flag == true){
    	cout << "chicken = " << numChicken << ", " << "dog = " << tmp;
	}else cout << "invalid";
    	return 0;
}
