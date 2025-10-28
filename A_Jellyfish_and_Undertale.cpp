#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;

        vector<int> t(n);
        for(int i = 0; i < n; i++) cin>>t[i];

        long long ans = b;
        for(int i = 0; i < n; i++) {
            ans += ((t[i]>=a) ? a-1 :  t[i]);
        }
        cout<<ans<<endl;
        
    }
}