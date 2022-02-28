#include<iostream>
using namespace std;
int main(){
    int day, month, year;
    cin >> day >> month >> year;
    int y0 = year - (14 - month) / 12;
    int x = y0 + y0/4 - y0/100 + y0/400;
    int m0 = month + 12 * ((14 - month)/12) - 2;
    int dayOfWeek = (day + x + 31 * m0/12) % 7;
    if(dayOfWeek == 0){
        cout << "sun";
    }else if(dayOfWeek == 1){
        cout << "mon";
    }else if(dayOfWeek == 2){
        cout << "tue";
    }else if(dayOfWeek == 3){
        cout << "wed";
    }else if(dayOfWeek == 4){
        cout << "thu";
    }else if(dayOfWeek == 5){
        cout << "fri";
    }else cout << "sat";
    return 0;
}
