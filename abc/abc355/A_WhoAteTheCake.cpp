#include <iostream>
#include <list>
using namespace std;

int main(){
    std::list<int> candidate = {1, 2, 3};
    int A, B;
    cin >> A >> B;
    candidate.remove(A);
    candidate.remove(B);
    if(candidate.size() == 1){
        for(int x : candidate){
            cout << x << endl;
        }
    }
    else{
        cout << -1 << endl;
    }
}