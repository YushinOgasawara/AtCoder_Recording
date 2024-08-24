#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    int n, k;
    int count = 0;
    bool x = false;
    bool flag = true;
    cin >> n >> k;
    vector<int> A(n);
    vector<int> Y(n+1);
    Y[0] = 0;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    // ソート内容
    double average = reduce(A.begin(), A.end(), 0.0) / A.size();
    for(int i = 0; i < n; i++){
        if(tmp )
    }
    sort(A.begin(), A.end());


    for(int i = 0; i < n; i++){
        Y[i+1] = Y[i] + A[i];
    }
    for(int i = 0; i < n; i++){
        if(Y[i+1] >= k){
            count = i+1;
            break;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(k < 0){
                flag = false;
            }else if(Y[i] < k && Y[j] >= k){
                if(i < j){
                    continue;
                }else{
                    flag = false;
                }
            }else if(Y[i] >= k || Y[j] < k){
                flag = false;
            }
        }
    }
    if(flag){
        x = true;
    }

    if(x){
        cout << "Yes" << endl;
        for(int i = 0; i < n; i++){
            cout << A.at(i) << " ";
        }
        cout << endl;

    }else{
        cout << "No" << endl;
    }
}