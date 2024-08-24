#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    long long N, X, Y;
    cin >> N >> X >> Y;
    vector<long long> A(N), B(N);
    int countX, countY = 0;
    int judge = 0;

    for(int i = 0; i < N; i++) {
        cin >> A.at(i);
    }for(int i = 0; i < N; i++) {
        cin >> B.at(i);
    }
    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());
    for(int i = 0; i < N; i++){
        X -= A[i];
        Y -= B[i];
        if(X <= -1 || Y <= -1){
            judge = i+1;
            break;
        }else if(i == N-1){
            judge = i+1;
        }
    }
    cout << judge << endl;

    return 0;
}
