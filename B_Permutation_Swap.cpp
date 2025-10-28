#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        vector<long long> arr(n);
        for(long long i=0;i<n;i++) cin>>arr[i];

        long long k  = abs(arr[0]-1);

        for(long long i=1;i<n;i++){
            k = gcd(k, abs(arr[i]-(1+i)));
        }
        cout<<k<<endl;
    }
}