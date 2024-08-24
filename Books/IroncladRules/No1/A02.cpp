#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int N, X;
    bool judge = false;
    cin >> N >> X;
    vector<int> A(N);

    for(int n = 0; n < N; n++) cin >> A.at(n);

    for(int n = 0; n < N; n++) if(X == A.at(n)) judge = true;

    string result = (judge) ? "Yes" : "No";
    
    cout << result << endl;
}