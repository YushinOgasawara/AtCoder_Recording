#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    bool judge = false;

    
    if(B > C){
        if(A > C && A < B) judge = true;
    }else{
        if(!(A > B && A < C)) judge = true;
    }
    if(judge){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
