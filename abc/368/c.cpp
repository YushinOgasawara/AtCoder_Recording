#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int64_t N;
    cin >> N;
    vector<int64_t> H(N);
    bool judge = true;
    int64_t total = 0;
    int64_t time5 = 0;

    for(int64_t n = 0; n < N; n++){
        cin >> H.at(n);
    }
    for(int64_t i = 0; i < N; i++){
        time5 = H[i] / 5;
        H[i] -= time5 * 5;
        total += 3 * time5;

        while(H[i] > 0){
            total++;
            if(total % 3 == 0) H[i] -= 3;
            else H[i] -= 1;
        }
    }
    cout << total << endl;
    return 0;
}