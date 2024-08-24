#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int R, G, B;
    string C;
    int anser = 0;
    cin >> R >> G >> B;
    cin >> C;
    if(C == "Red"){
        anser = min(G, B);
    }else if(C == "Green"){
        anser = min(R, B);
    }else if(C == "Blue"){
        anser = min(R, G);
    }

    cout << anser << endl;
}