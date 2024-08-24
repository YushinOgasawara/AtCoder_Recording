#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    bool x = false;
    cin >> n >> m;
    vector<int> A(n);
    vector<int> B(m);
    vector<int> C(n+m);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    for(int i = 0; i < m; i++){
        cin >> B[i];
    }
    for(int i = 0; i < n; i++){
        C[i] = A[i];
    }
    for(int i = 0; i < m; i++){
        C[i + n] = B[i];
    }
    sort(A.begin(), A.end());
    sort(C.begin(), C.end());
    for(int ci = 0; ci < n+m-1; ci++){
        for(int ai = 0; ai < n-1; ai++){
            if(C[ci] == A[ai] && C[ci+1] == A[ai+1]){
                x = true;
            }
        }
        
    }
    if(x){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}