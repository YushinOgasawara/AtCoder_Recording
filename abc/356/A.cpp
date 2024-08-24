#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, L, R;
    cin >> N >> L >> R;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        A[i] = i+1;
    }
    reverse(A.begin()+L-1, A.begin()+R);

    for(auto i : A){
        cout << i << " ";
    }
    cout << endl;
}