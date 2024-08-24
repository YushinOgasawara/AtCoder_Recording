#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    
    int count = 0;
    
    // ====================================
    // 赤と青との和と、Kとの差がN以下のとき、
    // 白は1からNの数字をかけるため、
    // すべての和がKとなる通りが存在すると言える。
    // ====================================

    for(int n_r = 1; n_r <= N; n_r++){
        for(int n_b = 1; n_b <= N; n_b++){
            int n_w = K - (n_r+n_b);
            if(n_w <= N && n_w >= 1) count++;
        }
    }

    cout << count << endl;
}