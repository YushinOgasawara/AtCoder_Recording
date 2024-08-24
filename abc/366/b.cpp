#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int count_max = 0;
    int count;
    bool judge = false;
    vector<string> S(N);

    for(int n = 0; n < N; n++){
        cin >> S.at(n);
    }
    
    for(int n = 0; n < N; n++){
        if(int(S[n].length()) < count_max){
            count_max = S[n].length();
        }
        if(n > 0 && int(S[n].length()) < int(S[n-1].length())){
            for(int i = 0; i < (int(S[n-1].length()) - int(S[n].length()));i++){
                S[n].append("*");
            }
        }
    }
    for(int n = 0; n < count_max; n++){
        for(int i = N-1; i >= 0; i--){
            // if(S[n].length() < count && i == count){
            //     cout << '*';
            // }else{
            //     cout << S[i][n];
            // }
            cout << S[i][n];
        }
        cout << endl;
    }
    return 0;
}
