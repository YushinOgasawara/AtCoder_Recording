#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    int K = pow(3, N);
    int count = 1;
    int pow_c = 0;
    int center = K / 2;
    bool even = false;
    if(N % 2 == 0){
        even = true;
    }
    if(N == 0){
        cout << "." << endl;
    }else{
    for(int i = 0; i < K; i++){
        for(int j = 0; j < K; j++){
            if(K == 3){
            // powは０乗をカバーしていない？
                if(i == 1 && j == 1){
                    // 白いマス
                    cout << ".";
                }else{
                    // 黒いマス
                    cout << "#"; 
                }
            }
            // 偶数処理
            else if(even){
                for(int a = 1; a <= count; a++){
                    pow_c = a*count;
                }
                if(i == 1 && j == 1){
                    // 白いマス
                    cout << ".";
                }else if(i >= center-3 && i <= center+2 && j >= center-3 && j <= center+2){
                    // 白いマス
                    cout << ".";
                }else if(i == pow(3, count)-2 && j == pow(3, count)-2){
                    // 白いマス
                    cout << ".";
                    count++;
                }else{
                    // 黒いマス
                    cout << "#"; 
                }
            // 奇数処理
            }else{
                if(i == 1 && j == 1){
                    // 白いマス
                    cout << ".";
                }else if(i >= center-1 && i <= center+1 && j >= center-1 && j <= center+1){
                    // 白いマス
                    cout << ".";
                }else if(i == pow_c-2 && j == pow_c-2){
                    // 白いマス
                    cout << ".";
                    count++;
                }else{
                    // 黒いマス
                    cout << "#"; 
                }
            }
            if(j == K-1){
                // 末端改行
                cout << endl;
            }
        }
    }
    }
}