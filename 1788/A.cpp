
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        long long arr[n];
       
        for(int i = 0; i < n; i++) cin>>arr[i];

        int total2 = 0;
        int curr2 = 0;

        for(int i = 0; i < n; i++) {
            if(arr[i] == 2) total2++;
        }
        int ans = -1;
        for(int i = 0; i < n; i++){
            if(arr[i] == 2) curr2++;
            if(curr2 == total2-curr2){
                ans = i+1;
                break;
            }
        }cout<<ans<<endl;
    }
    return 0;
}