#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string S;
    int count = 0;
    cin >> S;
    for(int i = 0; i < S.length();i++){
        if(isupper(S.at(i))){
            count++;
        }
    }
    if(S.length() < count*2){
        // 大文字変換
        transform(S.begin(), S.end(), S.begin(), ::toupper);
    }else{
        // 小文字変換
        transform(S.begin(), S.end(), S.begin(), ::tolower);
    }
    cout << S << endl;
}