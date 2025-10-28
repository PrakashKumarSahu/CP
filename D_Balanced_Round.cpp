#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,k;
        cin>>n>>k;

        vector<long long> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];

        if(n==1){
            cout<<0<<endl;
            continue;
        }
        sort(arr.begin(), arr.end());
        int currseq = 1;
        int maxseq = INT_MIN;

        for(int i = 1; i < n; i++){
            if((arr[i]-arr[i-1]) <= k){
                currseq++;
            } else{
                currseq = 1;
            }
            if(maxseq<currseq) maxseq=currseq;
            
        }
        cout<<n - maxseq<<endl;

    }
}