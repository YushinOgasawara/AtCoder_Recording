#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    for(int i = (10-1); i >= 0; i--){
        // bit演算子：左シフト
        int change = (1 << i);
        cout << (N / change) % 2;
    }
    cout << endl;
    return 0;
}