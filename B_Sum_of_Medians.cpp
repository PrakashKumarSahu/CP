#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> arr(n*k);
        for(int i=0;i<n*k;i++){
            cin>>arr[i];
        }
        
        sort(arr.begin(), arr.end());
        long long sum = 0;
        int temp = n*k;

        for(int i=0;i<k;i++){
            temp -= (n/2 + 1);
            sum += arr[temp];
        }
        cout<<sum<<endl;

    }
}
//initialezed from n*k then n/2 + 1 is subtracted to reach the median position in each group of size n.
//+1 is because where you're is not counting for example
//initially i am at n*k which is not part of the current subarray
//similarly for next group i will be in previous subarray
