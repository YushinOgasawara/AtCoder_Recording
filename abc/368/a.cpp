#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    int tmp;
    cin >> N >> K;
    bool judge = false;
    vector<int> A(N);
    vector<int> X(N);

    for(int i = 0; i < N; i++){
        cin >> A.at(i);
    }
    
    for(int i = N-1; i > N-K-1; i--){
        tmp = A[N-1];
        A.erase(A.end()-1);
        A.insert(A.begin(), tmp);
    }

    cout << A[0];
    for(int i = 1; i < N; i++){
        cout << ' ' << A[i];
    }
    cout << endl;
    return 0;
}
