#include <iostream>
using namespace std;

int main(){
    int bldNum, biggestBld;
    int prize = 1;
    cin >> bldNum;
    cin >> biggestBld;
    for(int i = 1; i < bldNum; i++){
        int j;
        cin >> j;
        if(biggestBld < j){
            prize = i+1;
            break;
        }
    }
    if(prize == 1){
        prize = -1;
    }
    cout << prize << endl;
}