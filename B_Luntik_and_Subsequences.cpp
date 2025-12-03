#include<bits/stdc++.h>
using namespace std;
// long long factorial(int n) {
//     if (n == 0 || n == 1)
//         return 1;           
//     else
//         return n * factorial(n - 1);  
// }
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        int count0 = 0;
        int count1 = 0;
        
        for(int i=0;i<n;i++){
            if(arr[i] == 0) count0++;
            else if(arr[i] == 1) count1++;
        }
        // int cnt = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if(arr[i] <= count1+1) cnt++;
        // }
        long long ans =pow(2,count0)*count1;
        cout<<ans<<endl;
        // //factorial
        // cout<<factorial(count0)*factorial(count1)*cnt<<endl;

        

        
    }
}