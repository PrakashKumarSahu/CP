#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n--;
        int arr[n];
        long long ans = 0;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            ans += arr[i];
        }
        cout<<-1*ans<<endl;    

    }
    return 0;
}