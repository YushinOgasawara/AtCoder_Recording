#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M;
    int count = 0;
    cin >> N >> M;
    int countHands = M;
    vector<int> H(N);
    vector<vector<int>> X(N, vector<int>(M));
    vector<int> Y(M);
    bool a = false;
    for(int n = 0; n < N; n++){
        cin >> H.at(n);
    }
    for(int n = 0; n < N; n++){
        countHands -= H.at(n);
        if(countHands < 0){
            break;
        }
        else{
            count++;
        }
    }
    cout << count << endl;
}