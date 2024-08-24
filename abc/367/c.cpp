#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> R(N);
    vector<int> A(N);
    bool judge = true;

    for(int n = 0; n < N; n++){
        cin >> R.at(n);
    }
    for(int n = 0; n < N; n++){
        A.at(n) = 1;
    }
    if(N == 1){
        for(int i = 0; i < 5; i++){
            A[0] += 1;
            if(A[0] <= R[0] && A[0] % K == 0){
                cout << A[0] << endl;
            }
        }
        return 0;
    }
    while(A[0] < 6){
        A[N-1] += 1;
        for(int k = 0; k < N; k++){
            if(A[k] > R[k]) judge = false;
        }
        if(judge && reduce(A.begin(), A.end()) % K == 0){
            cout << A[0];
            for(int i = 1; i < N; i++){
                cout << ' ' << A[i];
            }
            cout << endl;
        }
        judge = true;

        for(int k = N-1; k > 0; k--){
            if(A[k] == 5){
                A[k-1] += 1;
                A[k] = 1;
            }
        }
    }
    return 0;
}