#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    vector<vector<int>> X(N, vector<int>(M));
    vector<int> Y(M);
    bool a = false;
    for(int m = 0; m < M; m++){
        cin >> A.at(m);
    }
    for(int n = 0; n < N; n++){
        for(int m = 0; m < M; m++){
            cin >> X.at(n).at(m);
        }
    }
    for(int n = 0; n < N; n++){
        for(int m = 0; m < M; m++){
            Y.at(m) += X.at(n).at(m);
        }
    }

    for(int m = 0; m < M; m++){
        if(Y.at(m) - A.at(m) > 0){
            a = true;
        }
    }
    if(a){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
}