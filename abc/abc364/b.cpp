#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int H, W, x, y;
    cin >> H >> W >> x >> y;
    vector<string> C(H);
    string X;

    for(int h = 0; h < H; h++) {
        cin >> C.at(h);
    }
    cin >> X;
    x-=1;
    y-=1;
    for(int i = 0; i < X.length(); i++) {
        if(X[i] == 'D' && H - y > 0){
            if(C[x].at(y+1) == '.'){
                y = y + 1;
            }
        }else if(X[i] == 'U' && y > 0){
            if(C[x].at(y-1) == '.'){
                y = y - 1;
            }
        }else if(X[i] == 'R' && W - x > 0){
            if(C[x+1].at(y) == '.'){
                x = x + 1;
            }
        }else if(X[i] == 'L' && x > 0){
            if(C[x-1].at(y) == '.'){
                x = x - 1;
            }
        }
    }
    cout << x+1 << ' ' << y+1 << endl;

    return 0;
}
