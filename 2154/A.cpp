#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int prot = 0;
        int len = k - 1; 
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') len++;
            else {
                if (len >= k - 1) prot++;
                len = 0;
            }
        }
        cout << prot << endl;
    }
}
