
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];

        int ans = 0;
        for(int i = 1; i < n; i++){
            if(arr[i-1] % 2 == 0 && arr[i] % 2 ==0) {
                arr[i] *= arr[i-1];
                ans++;
            }
            else if(arr[i-1] % 2 != 0 && arr[i] % 2 != 0){
                arr[i] *= arr[i-1];
                ans++;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}