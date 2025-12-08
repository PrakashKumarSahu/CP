#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        set<ll> st;
        for(int i = 0; i < n; i++){
            ll temp;
            cin>>temp;
            st.insert(temp);
        }
        long long x = 2;
        bool flag = false;
        while(x != LONG_LONG_MAX){
            for(auto it : st){
                if(gcd(it,x) == 1) flag = true;;
            }
            if(flag) break;
            x++;

        }
        cout<<(flag ? x : -1)<<endl;
        
    }
}