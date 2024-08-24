#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    bool judge = true;
    int count = 0;
    int countA = 0;

    for(int n = 0; n < N; n++){
        cin >> A.at(n);
        if(A[n] < 1) countA++;
    }
    if(N - countA <= 1){
        cout << count << endl;
    }else{
        countA = 0;
        while(!(N - countA <= 1)){
            sort(A.rbegin(), A.rend());
            for(int i = 0; i < 2; i++){
                A[i] -= 1;
                if(A[i] < 1) countA++;
            }
            count++;
        }
        cout << count << endl;
    }
    return 0;
}