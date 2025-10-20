#include <iostream>
#include <vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; i++) cin>>a[i];
        for(int i = 0; i < n; i++) cin>>b[i];

        bool flag = false;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if (gcd(a[i], a[j]) > 1) flag = true;
            }
        }

        if(flag){
            cout<<0<<endl;
            continue;
        }

    
        flag = false;
        //to make gcd >1 i can make 2 number even 
        //or first i can check if making only one works else 2 
        for(int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if (gcd(a[i] + 1, a[j]) > 1 || gcd(a[i], a[j] + 1) > 1) flag = true;
            }
        }

        if(flag) cout<<1<<endl;
        else cout<<2<<endl;
    }
}
