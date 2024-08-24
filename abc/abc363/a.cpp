#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int R;
    int anser = 0;
    cin >> R;
    if(R <= 99){
        anser = 100 - R;
    }else if(R <= 199){
        anser = 200 - R;
    }else if(R <= 299){
        anser = 300 - R;
    }else if(R <= 399){
        anser = 400 - R;
    }

    cout << anser << endl;
}