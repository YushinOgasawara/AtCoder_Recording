#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;
    vector<int> A(26);
    int count = 0;
    int anser = 0;
    int n_k = 0;
    int tmp1 = 0;
    int tmp2 = 0;
    for(int i = 1; i <= N; i++){
        tmp1 += i;
    }
    for(int i = 1; i <= K; i++){
        tmp2 += i;
    }
    for(int i = 1; i <= N-K; i++){
        n_k += i;
    }
    anser = tmp1 / (tmp2 * K);
    cout << anser << endl;
    sort(S.begin(), S.end());
    for(int n = 0; n < N; n++){
        A[+S[n]-97] += 1;
    }
    for(int n = 0; n <= 26; n++){
        if(A[n] >= K) count++;
    }
    anser -= (tmp1-K) / (tmp2 * K)*(N-K+1)*count;

    cout << anser << endl;
}
