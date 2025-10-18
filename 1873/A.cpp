#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<char>> mat(10, vector<char>(10));
        long long ans = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> mat[i][j];
                if (mat[i][j] == 'X') {
                    int ring = min({i, j, 9 - i, 9 - j});
                    ans += ring + 1;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
