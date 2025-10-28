#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        vector<long long> arr(n);
        for(long long i=0;i<n;i++) {
            cin>>arr[i];
            if(arr[i] == 1){
                arr[i]++;
            }
        }

        for(long long i=0;i<n-1;i++){
            if(arr[i+1] % arr[i] == 0){
                arr[i+1]++;
            }
        }

        for(long long i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}