#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        //transision from number to zero ans ++;
        int ans = 0;
        for(int i=1;i<n;i++){
            if(arr[i-1] == 0 && arr[i] != 0)
            ans++; 
        }
        cout<<min(ans,2)<<endl;
    }
}