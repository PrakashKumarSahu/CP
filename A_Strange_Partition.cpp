#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        //maximum is always in unchanged array
        //minimum is always in changed array by making everything divisible by x

        long long max_sum = 0;
        long long min_sum = 0;

        for(int i=0;i<n;i++){
            max_sum += ((arr[i]+x-1)/x);       
            min_sum += (arr[i]);    
        }
        cout<<(min_sum+x-1)/x<<" "<<max_sum<<endl;


    }
}

