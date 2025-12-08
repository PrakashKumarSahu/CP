#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<ll> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];

        unordered_set<ll> uset;
        for(int i = 0; i < n; i++) uset.insert(arr[i]);


        while(true){
            ll currsize = uset.size();
            if(uset.count(currsize)){
                cout<<currsize<<endl;
                break;
            }else{
                uset.insert(currsize);
                continue;

            }
            
        }
        
    }
}





