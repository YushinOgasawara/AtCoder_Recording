#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string S, T;
    string judge;
    int w = 1;
    int count = 1;
    bool anser = false;
    cin >> S;
    cin >> T;
    while(w < S.size()){
        judge = "";
        for(int c = count-1; c < S.size(); c+=w){
            judge.push_back(S[c]);
        }
        if(judge == T){
            anser = true;
            break;
        }else if(w > count){
            count++;
        }else{
            count = 1;
            w++;
        }
    }

    if(anser) cout << "Yes" << endl;
    else cout << "No" << endl;
}