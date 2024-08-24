#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    int anser = 0;
    int count = 0;

    for(int n = 0; n < N; n++) {
        cin >> A.at(n);
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++){
            if(A[i] < A[j] && A[i] != A[j])count++;
        }
        if(count == 1){
            anser = i+1;
            break;
        }else{
            count = 0;
        }
    }
    cout << anser << endl;

    return 0;
}
