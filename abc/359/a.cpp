#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    string correct = "Takahashi";
    int count = 0;
    for(int n = 0; n < N; n++){
        cin >> S.at(n);
    }
    for(int n = 0; n < N; n++){
        if(S.at(n) == correct) count++;
    }
    
    cout << count << endl;
    
}