#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int Y;
    cin >> Y;
    int days = 0;

    
    if(Y%4 != 0){
        days = 365;
    }else if(Y%100 != 0){
        days = 366;
    }else if(Y%400 != 0){
        days = 365;
    }else{
        days = 366;
    }

    cout << days << endl;
    return 0;
}
