
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        long long arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];

        //gcd<=len then good
        //and if first 2 element is less <= 2 beautifull
        bool flag = false;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j<n; j++){
            if(__gcd(arr[i],arr[j])<=2) {
                flag = true;
                break;
            }}
        }
        cout<<flag?"YES":"NO";
        cout<<endl;
    }
    return 0;
}