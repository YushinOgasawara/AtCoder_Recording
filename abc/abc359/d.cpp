#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, A;
    int count = 0;
    cin >> N >> A;
    vector<int> T(N);
    vector<int> Y(N);
    for(int n = 0; n < N; n++){
        cin >> T.at(n);
    }
    Y.at(0) = T.at(0) + A;
    for(int n = 1; n < N; n++){
        if(Y.at(n-1) < T.at(n)){
            int rest = T.at(n) - Y.at(n-1);
            Y.at(n) = Y.at(n-1) + rest + A;
        }else{
            Y.at(n) = Y.at(n-1) + A;
        }
        
    }
    for(int n = 0; n < N; n++){
        cout << Y.at(n) << endl;
    }
}