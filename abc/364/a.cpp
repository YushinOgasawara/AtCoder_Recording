#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    int count = 0;
    bool judge = false;

    for(int i = 0; i < N; i++) {
        cin >> S.at(i);
    }
    for(int i = 0; i < N-1; i++) {
        if(i != N-2 && S[i] == "sweet" && S[i+1] == "sweet"){
            judge = true;
        }
    }
    if(judge){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }

    return 0;
}
