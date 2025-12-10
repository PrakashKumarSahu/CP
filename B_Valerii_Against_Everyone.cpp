#include<bits/stdc++.h>
using namespace std;



#define ll long long


int main(){
    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<ll> a(n);
        vector<ll> b(n);
        for(int i = 0; i< n; i++){
            cin>>a[i];
            // b[i] = pow(2,a[i]);
            b[i] = 1LL << a[i];
        }
        ll fsum = 0;
        bool flag = false;
        for(int i = 0; i< n; i++){
            fsum += b[i];
            ll ssum = 0;
            for(int j = i+1; j < n; j++){
                ssum += b[j];
            }
            if(ssum == fsum){
                flag = true;
                break;
            }
        }
        cout<<(flag?"YES":"NO")<<endl;
    }
}