#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N;
    string S;
    int count = 1;
    int sepacnt = 0;
    int tmp = 0;
    cin >> N >> S;
    vector<string> Sepa(N);
    if(N > 2){
        for(int n = 0; n < N-1; n++){
            tmp++;
            if(S[tmp] == S[tmp+1]){
                if(tmp < 3){
                    S.erase(0, tmp+1);
                    count++;
                    tmp = 0;
                }else{
                    Sepa[sepacnt] = S.substr(0, tmp+1);
                    cout << Sepa[sepacnt] << endl;
                    S.erase(0, tmp+1);
                    sepacnt++;
                    tmp = 0;
                } 
            }
        }
        for(int n = 0; n < N-1; n++){
            if(Sepa[n].size() < 3){
                count++;
            }else{
                count++;
                Sepa[n].erase(0, 2);
                n--;
            }
        }
    }
    int mod = (pow(10, 9)+7);
    int anser = count % mod;
    cout << anser << endl;
}