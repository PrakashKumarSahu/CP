//i need to make the number divisible by 25
//i can do this by changing the last two digits to 00, 25, 50, or 75
//i need to find the minimum number of changes required to achieve this

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        string s = to_string(n);
        int len = s.length();

        vector<string> targets = {"00", "25", "50", "75"};
        int ans = INT_MAX;

        for(auto target: targets){
            int changes = 0;
            int j = len - 1;

            // Find the second last digit of the target
            while(j >= 0 && s[j] != target[1]){
                changes++;
                j--;
            }

            if(j < 0){
                continue; // target not found
            }

            j--; // Move to the next digit

            // Find the last digit of the target
            while(j >= 0 && s[j] != target[0]){
                changes++;
                j--;
            }

            if(j < 0){
                continue; // target not found
            }

            ans = min(ans, changes);
        }
        cout << ans << endl;

    }
}
