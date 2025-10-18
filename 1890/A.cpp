#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        map<int, int> freq;
        for (int x : a) freq[x]++;

        if (freq.size() > 2) {
            cout << "NO\n";
            continue;
        }

        if (freq.size() == 1) {
            cout << "YES\n";
            continue;
        }

        auto it = freq.begin();
        int c1 = it->second;
        it++;
        int c2 = it->second;

        
        if (abs(c1 - c2) <= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
