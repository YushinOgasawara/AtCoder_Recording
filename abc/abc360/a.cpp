#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string S;
    cin >> S;
    int Rcount = 0;
    int Mcount = 0;
    for(int n = 0; n < S.size(); n++){
        if(S[n] == 'R'){
            Rcount = n;
        }else if(S[n] == 'M'){
            Mcount = n;
        }
    }
    if(Rcount < Mcount) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}