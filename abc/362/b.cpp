#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<int> A(2), B(2), C(2);
    vector<int> a(2), b(2), c(2);
    bool anser = false;

    for(int i = 0; i < 2; i++) {
        cin >> A.at(i);
    }
    for(int i = 0; i < 2; i++) {
        cin >> B.at(i);
    }
    for(int i = 0; i < 2; i++) {
        cin >> C.at(i);
    }

    for(int i = 0; i < 2; i++) {
        a[i] = A[i] - C[i];
    }
    for(int i = 0; i < 2; i++) {
        b[i] = B[i] - C[i];
    }
    for(int i = 0; i < 2; i++) {
        c[i] = B[i] - A[i];
    }

    int aa = pow(a[0], 2) + pow(a[1], 2);
    int bb = pow(b[0], 2) + pow(b[1], 2);
    int cc = pow(c[0], 2) + pow(c[1], 2);
    int max = aa;
    if(max < bb){
        max = bb;
    }
    if(max < cc){
        max = cc;
    }
    double left, right;
    if(max == aa){
        left = aa;
        right = bb + cc;
    }else if(max == bb){
        left = bb;
        right = aa + cc;
    }else if(max == cc){
        left = cc;
        right = aa + bb;
    }
    if(left == right) anser = true;
    if(anser) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
