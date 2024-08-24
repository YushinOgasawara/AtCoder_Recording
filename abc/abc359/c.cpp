#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int64_t Sx, Sy, Tx, Ty;
    int64_t cut = 0;
    int64_t taxX, taxY;
    cin >> Sx >> Sy >> Tx >> Ty;
    int64_t distX = abs(Tx - Sx);
    int64_t distY = abs(Ty - Sy);
    if(abs(Sx) == abs(Sy)){
        if(Tx <= Sx){
            cut = distY;
        }else{
            cut = distY+1;
        }
    }else{
        cut = distY+((abs(Sx-Sy)+1)%2);
    }
    
    if(distX <= cut){
        taxX = 0;
    }else{
        taxX = (distX - cut + 1)/2;
    }
    taxY = distY;
    
    cout << (taxX + taxY) << endl;
}