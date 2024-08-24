#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    int count = 0;
    cin >> N;
    vector<int> A(2*N);
    for(int n = 0; n < (2*N); n++){
        cin >> A.at(n);
    }
    for(int n = 0; n < 2*N-2; n++){
        if(A.at(n) == A.at(n+2)){
            count++;
        }
    }
    cout << count << endl;
}