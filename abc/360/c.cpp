#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    int count = 0;
    int tmpcnt = 0;
    cin >> N;
    vector<int> A(N);
    vector<int> W(N);
    vector<int> Judge(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }
    for (int i = 0; i < N; i++) {
        cin >> W.at(i);
    }
    for(int i = 0; i < N; i++){
        tmpcnt = 0;
        Judge.at(i) = pow(10, 4) + 1;
        for(int j = 0; j < N; j++){
            if(i+1 == A.at(j)){
                if(tmpcnt > 0) Judge.at(i) = min(Judge.at(i), W.at(j));
                else{
                    Judge.at(i) = W.at(j);
                    tmpcnt++;
                }
            }
        }
        if(!(Judge.at(i) > pow(10, 4)) && tmpcnt > 1) count += Judge.at(i);
    }
    cout << count << endl;
}
