#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,q;
        cin>>n>>q;

        vector<long long> arr(n);
        long long sum = 0;

        for(long long i=0;i<n;i++){
            cin>>arr[i];
            sum += arr[i];
        }
        vector<long long> pre(n+1,0);

        for(long long i=1;i<=n;i++){
            pre[i] = pre[i-1] +arr[i-1];
        }
            

        while(q--){
            long long l,r,k;
            cin>>l>>r>>k;

            long long sum2rem = pre[r]-pre[l-1];
            long long newSum = sum - sum2rem + (r-l+1)*k;

            if(newSum%2==1){  
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            


        }
    }
}