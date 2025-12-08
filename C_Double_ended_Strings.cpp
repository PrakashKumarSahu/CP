#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string a, b;
        cin >> a >> b;

        string bs = (a.size() >= b.size()) ? a : b;
        string ss = (a.size() >= b.size()) ? b : a;

        int n = ss.size();
        int best = 0; 

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n - i; j++){
                string sub = ss.substr(i, n - i - j);
                if(bs.find(sub) != string::npos){
                    best = max(best, (int)sub.size());
                }
            }
        }

        int ans = (a.size() - best) + (b.size() - best);
        cout << ans << endl;
    }
}
