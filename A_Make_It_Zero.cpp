#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        int arr[n];
        bool flag0 = true;
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            if(arr[i] != 0){
                flag0 = false;
            }
        }

        bool flag = true;
        
        for(int i = 1; i < n; i++){
            if(arr[i-1] != arr[i]) {
                flag = false;
                break;
            }

        }
        if(flag0){
            cout<<0<<endl;
        } 
        else if(flag){
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
        } 
        else if(n%2 == 0) {
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else{
            cout<<4<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;

            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;

        } 
    }
}