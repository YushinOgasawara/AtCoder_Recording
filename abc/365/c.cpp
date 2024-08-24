#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M; // Read the number of elements and the threshold value
    vector<int> A(N); // Create a vector to store the elements

    for(int n = 0; n < N; n++) {
        cin >> A[n]; // Read the elements into the vector
    }

    int sum = accumulate(A.begin(), A.end(), 0); // Calculate the sum of all elements

    if(sum <= M) {
        cout << "infinite" << endl; // If the sum is less than or equal to M, output "infinite"
        return 0;
    } else {
        int ave = sum / N; // Calculate the average of the elements
        int count = 0; // Counter for elements less than the average
        int udrAve = 0; // Sum of elements less than the average

        for(int i = 0; i < N; i++) {
            if(A[i] < ave) {
                count++;
                udrAve += A[i]; // Sum up elements less than the average
            }
        }

        // Calculate the result based on elements less than the average
        int answer = (M - udrAve) / (N - count);
        cout << answer << endl; // Output the result
        return 0;
    }
}
