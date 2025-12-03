#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        int min = k;
        
        for(int i = 0; i<n;i++){
            if(arr[i] !=0){
                if(arr[i]%k == 0){
                    min = 0;
                    break;

                }
                else if((k - arr[i]%k) < min)
                    min = (k - arr[i]%k);
                 
            }
        }
        cout<<min<<endl;
    }
}
