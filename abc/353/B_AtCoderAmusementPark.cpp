#include <bits/stdc++.h>
using namespace std;

int main(){
    int groups, capa;
    int count = 0;
    int seats = 0;
    cin >> groups;
    cin >> capa;
    while(true){
        if(groups == 0){
            break;
        }
        int j;
        cin >> j;
        if(seats - j < 0){
            seats = capa;
            count++;
        }
        else if(seats - j == 0){
            seats = capa;
            count++;
            groups--;
        }
        else{
            seats -= j;
            groups--;
        }
    }
    cout << count << endl;
}