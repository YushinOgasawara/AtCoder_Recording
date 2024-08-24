#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int ans = n;
    for (int bit = 0; bit < (1 << n); bit++) {
        vector<bool> exist(m);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (bit >> i & 1) {
                ++cnt;
                for (int j = 0; j < m; j++) {
                    if (s[i][j] == 'o') exist[j] = true;
                }
            }
        }
        bool all_exist = true;
        for (int j = 0; j < m; j++) {
            if (!exist[j]) all_exist = false;
        }
        if (all_exist) ans = min(ans, cnt);
    }
    cout << ans << endl;
}
