#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N, K, X;
    cin >> N >> K >> X;
    vector<int> A(N);
    vector<int> B(N+1);
    bool judge = false;
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }
    for (int i = 0; i < N; i++) {
        if(judge){
            B.at(i+1) = A.at(i);
        }else{
            B.at(i) = A.at(i);
        }
        if(i+1 == K){
            B.at(i+1) = X;
            judge = true;
        }
    }
    for (int i = 0; i < N+1; i++) {
        cout << B.at(i);
        if(i < N){
            cout << " ";
        }
    }
    cout << endl;
}