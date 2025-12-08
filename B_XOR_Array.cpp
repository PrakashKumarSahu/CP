#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, l, r;
        cin >> n >> l >> r;

        vector<long long> p(n+1), a(n+1);

        // make all p[i] unique
        for(int i = 0; i <= n; i++){
            p[i] = i + 1;    // just use any unique values
        }

        // make exactly one pair equal
        p[r] = p[l-1];

        // build a[i]
        for(int i = 1; i <= n; i++){
            a[i] = p[i] ^ p[i-1];
        }

        // print
        for(int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
}
