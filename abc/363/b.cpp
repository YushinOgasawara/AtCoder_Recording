#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int N, T, P;
    cin >> N >> T >> P;
    vector<int> L(N);
    int count = 0;

    for(int i = 0; i < N; i++) {
        cin >> L.at(i);
    }
    for(int i = 0; i < N; i++) {
        L[i] = T - L[i];
        if(L[i] <= 0){
            count++;
        }
    }
    if(count >= P){
        cout << 0 << endl;
    }else{
        sort(L.begin(), L.end());
        count = L[P-1];
        cout << count << endl;
    }

    return 0;
}
