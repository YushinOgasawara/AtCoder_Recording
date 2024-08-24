#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int N, T, A;
    cin >> N >> T >> A;
    bool judge = false;

    
    if((N - (T + A) < (T - A)) || (N - (T + A) < (A - T))){
        judge = true;
    }
    if(judge){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
