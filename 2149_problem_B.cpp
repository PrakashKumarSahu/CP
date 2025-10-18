#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int maxdiff = -1;
        for(int i=0;i<n;i += 2){
            if(maxdiff < abs(arr[i] - arr[i+1])){
                maxdiff = abs(arr[i] - arr[i+1]);
            }
           
        }
        cout<<maxdiff<<endl;
    }

    return 0;
}